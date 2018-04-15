//BFS Code

#include<list>
#include<iostream>
#include<queue>
using namespace std;

class Graph
{
	list<int> *adj;
	bool *visited;
	list<int> q ; //queue
			
	int V;
	
	public:
	
		Graph(int v)//no of vertices
		{
			V=v;
			adj = new list<int>[v];
			visited = new bool[v];
			for(int i=0;i<v;i++)
			visited[i] = false;
		}
		
		void addEdge(int s, int d)
		{
			adj[s].push_back(d);
		}
		
		void DFS(int s) // s is the start
		{
			list<int>::iterator i;
			list<int>::iterator j;
			visited[s]= true;
			cout<<"\t"<<s;	
			for(i = adj[s].begin();i!=adj[s].end();i++)
			{
				if(!visited[*i])
				{
					DFS(*i);
				}
				
				
			}
			
			
		}
		
};

int main()
{
		Graph g(9);
	/* g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);*/
    
    g.addEdge(1,2);
    g.addEdge(2,1);
    g.addEdge(1,0);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(3,1);
    g.addEdge(3,4);
    g.addEdge(4,3);
    g.addEdge(5,3);
    g.addEdge(3,5);
    g.addEdge(6,3);
    g.addEdge(3,6);
    g.addEdge(6,7);
    g.addEdge(7,6);
    g.addEdge(7,0);
    g.addEdge(0,7);
    g.addEdge(7,8);
    g.addEdge(8,7);
    g.addEdge(8,5);
    g.addEdge(5,8);
    
    g.DFS(1);
	
	return 0;
}
