/***************************************************************
* Data Structures in C++ - Graphs
* Scaler
***************************************************************/

#include <iostream>
#include <list>

using namespace std;

void displayAdjList(list<int> adjList[], int v)
{
    //print the adjancency list for each of the vertex from 0 to v-1
    for(int i=0; i < v; i++)
    {
        cout << i << " --> ";
        
        //iterate over all its elements in adjList
        //iterator
        for(auto elem : adjList[i])
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

void add_edge(list<int> adjList[], int u, int v)
{
    //add v to adjancency list of u
    adjList[u].push_back(v);
    
    //add u to the adjancency list of v
    adjList[v].push_back(u);
}


int main()
{
    // adj list representation of a graph --> undirected and unweighter
    
    // v is the number of vertices in the graph
    int v = 6;
    
    //creating an array of list of int, to store adjancency list of each vertices
    list<int> adjList[v];
    
    // create edges in graph
    add_edge(adjList, 0, 4);
    add_edge(adjList, 0, 3);
    add_edge(adjList, 1, 2);
    add_edge(adjList, 1, 4);
    add_edge(adjList, 1, 5);
    add_edge(adjList, 2, 3);
    add_edge(adjList, 2, 5);
    add_edge(adjList, 5, 3);
    add_edge(adjList, 5, 4);
    
    displayAdjList(adjList, v);
    
    return 0;
}