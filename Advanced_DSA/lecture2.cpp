/***************************************************************
* Advanced Algorithms (COMPSCI 224)
* Harvard University
* Link: https://youtu.be/3_o0-zPRQqw?si=iDjWMUpsr8s1og4r 
* Lecture: https://web.stanford.edu/class/archive/cs/cs166/cs166.1196/lectures/16/Small16.pdf
***************************************************************/

/********************** Fusion Tree Algorithms **************************
    * Static processor
    * Made dynamic
    * (Andersson-Thomp JACM'07) : O(logw^n+loglogn) updates
    * (Raman ESA'96): O(logw^n)updates(expected time)
    * Query for all: O(logw^n)
    * Basic issue: How do we search a single fusion tree node in constant time?
    -> Basic Ingredients
    --> Multiplication
    --> Sketch compression
    --> Word-Level parallelism (parallel comparison)
    --> Most significant set bit (MSB) in 0(1) time
    * Claim: if we see where sk(e) fits amongst the sk(Xi) that is the same as where q fits amongst the Xi
    * MSB(Xi ^ q) compute and MSB(Xi+1 ^ q) and take the more sig. bit b/w the two.
    -> Problem: How do we form sketches?
    --> We'll compress down to O(r^4) bits
    --> The important bits will be representd, w/ some (known) amount of O-spacing in b/w them
    -> Lemma: We can choose the Mi s.t.
    --> All the bi + mj are distinct
    --> b0 + m0cb1+m, c...cbr-1+ mr-1
    --> (br-1 + mr-1) - (b0+m0) = O(r^4)
    -> The Point
    --> We first mask the important bits from Xi to get X
    --> The we do X.M, mask out {bi + mi}
    --> Shift down so that b0 + m0 maps to LSB
    -> MSB
    --> MSB(X)
    --> Split x into square(w) chunks of square(w) bits each
*/

#include <iostream>

using namespace std;

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

    return 0;
}