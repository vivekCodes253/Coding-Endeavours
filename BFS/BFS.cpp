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
		
		void BFS(int s) // s is the start
		{
			list<int>::iterator i;
			list<int>::iterator j;
			visited[s]= true;	
			cout<<s;
			q.push_back(s);
			for(i=q.begin();i!=q.end();i++)
			{
				for(j=adj[*i].begin();j!=adj[*i].end();j++)
				{
					if(!visited[*j])
					{
						visited[*j]=true;
						q.push_back(*j);
						cout<<"\t"<<*j;
					}
				}
				
					
			}
			
			
		}
		
};

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
