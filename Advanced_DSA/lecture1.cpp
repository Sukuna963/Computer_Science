/***************************************************************
* Advanced Algorithms (COMPSCI 224)
* Harvard University
* Link: https://youtu.be/0JUN9aDxVmI?si=dRgbnhnSaemEkQMy 
* Lecture: https://ocw.mit.edu/courses/6-046j-design-and-analysis-of-algorithms-spring-2012/c02af0a02710642161276560ab21510d_MIT6_046JS12_lec15.pdf
***************************************************************/

/******************** Static/Dynamic prodecessor **********************************
    * Data Structure represents set S of items {X1 ... Xn}
    * Query: pred(Z) = max{X & S : X < Z}, want low space, fast query
    * Static: no insertions
    * Dynamic: Insertion
                        Example Solution
    * Store numbers sorted, Binary Search (Static)
    * O(log(n)) dynamic query using balanced BST

*********************** Word RAM model *********************************************
    * Items are integer in {0,1,2,...,2^w-1}
    * W = "Word Size", u=2^w-1
    * Also assume that pointers fit in a word
    * Space >= n
    * W >= log(space) >= log(n)
    * Word Ram: assume that given x,y fitting in a word each, we can do
        + / * - , ~ ^ | & >> << (in constant time)

************************* Data Structures *******************************************
1- Van Emde Boas Tree (FOCS'75)
    * Defined recursively
    * Fields of VEB(u) (V): 
        -> square(u)-size array V.cluster[0],..., V.cluster[square(u)-1]
        -> V.summary is a V^EBsquare(u) instance
        -> V.min/V.max are integers in {0,...,u-1}
    * Space of VEB:
        -> S(u) = (square(u)+1)S(square(u)) + O(1)
        -> S(u) = 0(u)
        -> Improve Space: In a VEB data structure, have a hash table
        --> Keys are cluster ID's c
        --> Value is a pointer to corresponding non-empty cluster
        -> Claim: VEB w/ hash table use 0(n) space
        -> PF: Charge the cost of storing (c, p/r to cluster c) to the minimum element
        of cluster c. Each X&S is chaged exactly once
        -> Dictionary Problem:
        --> Store (key,value) pairs
        --> Query(k): returns val associated w/ key K (or null if K is not associated)
        --> Insert(K,V): associates val V w/ keys K
        -> Dynamic Dict. is possible w/ 0(n) space, 0(1) worst case query, 0(1) expected insertion
    * Update/Query: 0(logw) time / 0(u) space
        -> can be made 0(n) w randomization

2- Yfast tries: same bounds (Willard, IPL'83)

3- Fusion Trees (Freedman, Willard JCSS'93)
    * Query in time 0(log(w^n))
    * Can achieve min{log(w),log(w^n)} <= square(log(n)
    * W/Dynamic Fusion Trees O(n square(log(n))) sorting

4- Faster Sorting:
    *O(n loglog(n)) det. (Itan, Stoc'02)
    * O(n square(loglog(n))) rand. (Han, Thomp FOCS'02)
*/

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// Van Emde Boas Tree
class vEB
{
    int u;
    int min;
    int max;
    vEB *summary;
    vector<vEB *> children;
    
    int high(int k)
    {
        int x = ceil(sqrt(u));
        return floor(k/x);
    }
    
    int low(int k)
    {
        int x = ceil(sqrt(u));
        return k % x;
    }
    
    int index(int k, int kk)
    {
        return(k*(int)sqrt(u)+kk);
    }
    
    public:
        vEB(int U)
        {
            u = pow(sqrt(U),2);
            min = u;
            max = -1;
            
            if(u <= 2)
            {
                summary = nullptr;
                children = vector<vEB *> (0, nullptr);
            }
            else
            {
                int children_count = ceil(sqrt(u));
                int children_size = ceil(u/sqrt(u));
                
                summary = new vEB(children_count);
                children = vector<vEB *>(children_count, nullptr);
                
                for(int i=0; i < children_count; i++)
                {
                    children[i] = new vEB(children_count);
                }
            }
        }
        
        void insert(int k)
        {
            if(min > max)
            {
                min = max = k;
                return;
            }
            
            if(k < min)
            {
                int temp;
                temp = min;
                min = k;
                k = temp;
            }
            
            if(k > max)
            {
                max = k;
            }
            
            if(u == 2)
            {
                max = k;
                return;
            }
            
            int i = high(k);
            int j = low(k);
            
            children[i] -> insert(j);
            
            if(children[i]->max == children[i]->min)
            {
                summary -> insert(i);
            }
        }
        
        void remove(int k)
        {
            if(min > max)
            {
                return;
            }
            
            if(min == max)
            {
                min = u;
                max = -1;
                return;
            }
            
            if(u == 2)
            {
                if(k == 1)
                {
                    if(min == 1)
                    {
                        min = u;
                        max = -1;
                    }
                    else if(min == 0)
                    {
                        max = 0;
                    }
                }
                else
                {
                    if(max == 0)
                    {
                        min = u;
                        max = -1;
                    }
                    else if(max == 1)
                    {
                        min = 1;
                    }
                }
                
                return;
            }
            
            if(k == min)
            {
                int i = summary -> min;
                min = index(i, children[i]->min);
                return;
            }
            
            int i = high(k);
            int j = low(k);
            
            children[i] -> remove(j);
            
            if(children[i]->min > children[i]->max)
            {
                summary -> remove(i);
            }
            
            if(k == max)
            {
                if(summary->min > summary->max)
                {
                    max = min;
                }
                else
                {
                    i = summary->min;
                    max = index(i, children[i]->max);
                }
            }
        }
        
        int getMin()
        {
            return min;
        }
        
        int getMax()
        {
            return max;
        }
        
        int universe()
        {
            return u;
        }
        
        int sucessor(int k)
        {
            if(k <= min)
            {
                return min;
            }
            else if(k > max)
            {
                return u;
            }
            
            int i = high(k);
            int j = low(k);
            
            if(j <= children[i]->max)
            {
                int res = children[i] -> sucessor(j);
                if(res >= (u/(int)sqrt(u)))
                {
                    return u;
                }
                
                return k - j + res;
            }
            else
            {
                int res = children[summary->sucessor(i)] -> min;
                if(res >= children[summary->min]->u)
                {
                    return u;
                }
                
                return index(summary->sucessor(i), res);
            }
        }
};

int main()
{
    cout << "*********************** Van Emde Boas Tree Algorithm ***************************************" << endl;
    
    vEB vtree(1 << 4);
    
    cout << "Insert 12, 10, 13, 14" << endl;
    vtree.insert(12);
    vtree.insert(10);
    vtree.insert(13);
    vtree.insert(14);
    
    cout << "Sucessor of 2 is: " << vtree.sucessor(2) << endl;
    vtree.remove(13);
    cout << "Removing 13. Now sucessor of 13 is: " << vtree.sucessor(13) << endl;
    vtree.remove(14);
    cout << "Removing 14. Now sucessor of 13 is: " << vtree.sucessor(13) << endl;
    cout << "16, which is universe size, means no sucessor" << endl;
    
    return 0;
}