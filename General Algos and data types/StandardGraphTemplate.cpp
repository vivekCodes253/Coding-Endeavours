//Graph Template

#include<list>
#include<iostream>
using namespace std;

class Graph
{
	list<int> *adj;									//Adjacency matrix
	bool *visited;									//Visited node or not
	list<int> q ; 									//Queue
	int V;											//Number of vertices
	public:
	
		Graph(int v)
		{
			V=v;
			adj = new list<int>[v];
			visited = new bool[v];
			for(int i=0;i<v;i++)
				visited[i] = false;
		}
		
		void addEdge(int s, int d)					//Adding an edge to the graph
		{
			adj[s].push_back(d);
		}
		
};

int main()
{
		Graph g(4);									//Initialising a graph of size 4
	g.addEdge(0, 1);								//Adding directed edge, 0->1
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

	return 0;
}
