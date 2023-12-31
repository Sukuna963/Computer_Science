/***************************************************************
* Data Structures in C++ - Graphs
* Scaler
***************************************************************/

/*
* Program to count number of nodes
* in loop in a linkedlist if loop
* is present
*/
#include <iostream>

using namespace std;

int adjMatrix[6][6];

void displayAdjMatrix(int v)
{
    for(int i=0; i < v; i++)
    {
        for(int j=0; j < v; j++)
        {
            // 1- edge between i and j
            // 0 - no edge between i and j
            cout << " " << adjMatrix[i][j];
        }
        
        cout << endl;
    }
}

void add_edge(int u, int v)
{
    // undirected graph - edge between u and v: edge is from u to v and v to u
    adjMatrix[u][v] = 1;
    
    //undirected
    adjMatrix[v][u] = 1;
}


int main()
{
    // adj matrix representation of a graph --> undirected unweighter
    
    // v is the number of vertices in the graph
    int v = 6;
    
    // initializing the adjMatrix to all 0s
    for(int i=0; i < v; i++)
    {
        for(int j=0; j < v; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }
    
    // create edges in graph
    add_edge(0,4);
    add_edge(0,3);
    add_edge(1,2);
    add_edge(1,4);
    add_edge(1,5);
    add_edge(2,3);
    add_edge(2,5);
    add_edge(5,3);
    add_edge(5,4);
    
    displayAdjMatrix(v);
    
    return 0;
}