/***************************************************************
* Advanced Algorithms (COMPSCI 224)
* Harvard University
* Link: https://youtu.be/WqBc0ZCU4Uw?si=klIkphHXpzhuP7jM 
* Lecture: https://pages.cs.wisc.edu/~shuchi/courses/787-F07/scribe-notes/lecture08.pdf
***************************************************************/

/********************** Hashing Algorithms **************************
 * There's some set Sc[u], |S| = n, such that we want some he H we pick to "behave nicely" on S.
 * Linear Probing
 * Cuckoo hashing
 * Bloom filters
 -> Example (Usually called "balls and bills" problem process)
 --> We have n jobs that need to be assigned to m machines
 --> Each jobs has some job ID in [u]
 --> When a new job^j&[u] comes have H processed by machine h(j)
 * Markov's ineq.
 -> K-wise
 --> X1 > Xn are k-wise independent if for any 1 <= i, < i2 < ... < ik <= N,
    the random variables Xi, Xi2, ... , Xik are indep.
 * A set of hash functions H is a "k-wise family" if the set of rand
    vars h(0), h(1), ... , h(u-1) are k-wise indep. where h&H uniformly at random
 -> Dictionary Problem
 --> Data Structural problem
 --> Update (k,v): associates key k with value v, k, v&[u]
 --> Query(k): return v associated with k
********************************************************************/

#include <iostream>
#include <list>

using namespace std;
 
class hashWithChaining
{
    int Bucket;
    list<int> *table;
    
    public:
        hashWithChaining(int v)
        {
            this -> Bucket = v;
            table = new list<int>[Bucket];
        }
 
        void insertItem(int key)
        {
            int index = hashFunction(key);
            table[index].push_back(key);
        }
 
        void deleteItem(int key)
        {
             int index = hashFunction(key);
 
            list<int> :: iterator i;
            for(i=table[index].begin(); i!=table[index].end(); i++) 
            {
                if (*i == key)
                {
                    break;
                }
            }
 
            if(i!=table[index].end())
            {
                table[index].erase(i);   
            }
        }
 
        int hashFunction(int x) 
        {
            return (x % Bucket);
        }
 
        void displayHash()
        {
            for(int i=0; i<Bucket; i++) 
            {
                cout << i;
                for (auto x : table[i])
                {
                    cout << " -> " << x;
                }
                cout << endl;
            }
        }
};
 
int main()
{
  int a[] = {15, 11, 27, 8, 19, 28, 2, 14};
  int n = sizeof(a)/sizeof(a[0]);
 
  hashWithChaining h(7);
  
  for (int i = 0; i < n; i++)
  {
      h.insertItem(a[i]);
  }
 
  h.deleteItem(11);
 
  h.displayHash();
 
  return 0;
}