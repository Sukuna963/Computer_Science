/***************************************************************
* Data Structures in C++ - Graphs
* Scaler
***************************************************************/

#include <iostream>
#include <list>

using namespace std;

class Graph 
{
  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
        Graph(int vertices);
        void addEdge(int src, int dest);
        void BFS(int startVertex);
};

// Create a graph with given vertices,
// and maintain an adjacency list
Graph::Graph(int vertices) 
{
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest) 
{
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex) 
{
    //visited[numVertices] = True, node i has already been explored or visited
    //visited[numVertices] = False, node i has not been explored or visited yet
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
  {
      visited[i] = false;
  }
  
  //queue to keep a track of the order to be explored - FIFO
  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) 
  {
    //store the first element of the queue into currVertex
    int currVertex = queue.front();
    cout << "Visited " << currVertex << " " << endl;
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) 
    {
      int adjVertex = *i;
      if (!visited[adjVertex]) 
      {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main() 
{
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}