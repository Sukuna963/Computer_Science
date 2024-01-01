/***************************************************************
* Advanced Algorithms (COMPSCI 224)
* Harvard University
* Link: https://youtu.be/0JUN9aDxVmI?si=dRgbnhnSaemEkQMy 
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


// Fusion Tree
class fusionTree
{
    public:
        struct FusionTree
        {
            int *d;
            FusionTree **child_ptr;
            bool l;
            int n;
        }*r = NULL, *np = NULL, *x = NULL;
    
        FusionTree* init()
        {
            int i;
            np = new FusionTree;
            np -> d = new int[6];
            np -> child_ptr = new FusionTree *[7];
            np -> l = true;
            np -> n = 0;
            
            for(int i=0; i < 7; i++)
            {
                np -> child_ptr[i] = NULL;
            }
            
            return np;
        }
        
        void traverse(FusionTree *p)
        {
            cout<<endl;
            int i;
            
            for(i=0; i < p->n; i++) 
            {
                if (p->l == false) 
                {
                    traverse(p->child_ptr[i]);
                }
                
                cout << " " << p->d[i];
            }
            
            if (p->l == false) 
            {
                traverse(p->child_ptr[i]);
            }
            
            cout<<endl;
        }
        
        void sort(int *p, int n)
        {
            int i, j, t;
            for(i=0; i < n; i++)
            {
                for(j=0; j <= n; j++)
                {
                    if(p[i] > p[j])
                    {
                        t = p[i];
                        p[i] = p[j];
                        p[j] = t;
                    }
                }
            }
        }
        
        int split_child(FusionTree *x, int i)
        {
            int j, mid;
            FusionTree *np1, *np3, *y;
            np3 = init();
            np3 -> l = true;
            
            if(i == -1) 
            {
                mid = x -> d[2];
                x -> d[2] = 0;
                x -> n--;
                np1 = init();
                np1 -> l = false;
                x -> l = true;
                
                for(j=3; j < 6; j++) 
                {
                    np3 -> d[j-3] = x -> d[j];
                    np3 -> child_ptr[j-3] = x -> child_ptr[j];
                    np3 -> n++;
                    x -> d[j] = 0;
                    x -> n--;
                }
                
                for(j=0; j < 6; j++)
                {
                    x -> child_ptr[j] = NULL;
                }
                
                np1 -> d[0] = mid;
                np1 -> child_ptr[np1->n] = x;
                np1 -> child_ptr[np1->n+1] = np3;
                np1 -> n++;
                r = np1;
            } 
            else 
            {
                y = x -> child_ptr[i];
                mid = y -> d[2];
                y -> d[2] = 0;
                y -> n--;
                
                for(j=3; j < 6; j++) 
                {
                    np3 -> d[j-3] = y -> d[j];
                    np3 -> n++;
                    y -> d[j] = 0;
                    y -> n--;
                }
                
                x -> child_ptr[i+1] = y;
                x -> child_ptr[i+1] = np3;
            }
            
            return mid;
        }

        void insert(int a) 
        {
            int i, t;
            x = r;
            
            if (x == NULL) 
            {
                r = init();
                x = r;
            } 
            else 
            {
                if(x->l== true && x->n == 6) 
                {
                    t = split_child(x, -1);
                    x = r;
                    
                    for(i=0; i < (x->n); i++) 
                    {
                        if((a > x->d[i]) && (a < x->d[i + 1])) 
                        {
                            i++;
                            break;
                        } 
                        else if(a < x->d[0]) 
                        {
                            break;
                        } 
                        else 
                        {
                            continue;
                        }
                    }
                    
                    x = x->child_ptr[i];
                } 
                else 
                {
                    while(x->l == false) 
                    {
                        for(i=0; i < (x->n); i++) 
                        {
                            if ((a > x->d[i]) && (a < x->d[i + 1])) 
                            {
                                i++;
                                break;
                            } 
                            else if(a < x->d[0]) 
                            {
                                break;
                            } 
                            else 
                            {
                                continue;
                            }
                        }
                        
                        if((x->child_ptr[i])->n == 6) 
                        {
                            t = split_child(x, i);
                            x -> d[x->n] = t;
                            x -> n++;
                            continue;
                        } 
                        else 
                        {
                            x = x -> child_ptr[i];
                        }
                    }
                }
            }
            
            x -> d[x->n] = a;
            sort(x->d, x->n);
            x -> n++;
        }
};

int main()
{
    cout << "*********************************** Fusion Tree *******************************************" << endl;
    
    fusionTree ftree;
    
    ftree.insert(1);
    ftree.insert(0);
    ftree.insert(0);
    ftree.insert(1);
    ftree.insert(1);
    ftree.insert(1);
    ftree.insert(0);
    ftree.insert(1);
    
    ftree.traverse(ftree.r);
    
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