//Graph Template

#include<list>
#include<iostream>
using namespace std;
const int size = 9;

class Graph
{
	list<int> *adj;									//Adjacency list
	bool *visited;								//Visited node or not
	int adjMatrix[size][size]]								
	list<int> q ; 									//Queue
	public:
	
		Graph()
		{
			adj = new list<int>[size];					//adjacency list
			visited = new bool[size];
			for(int i=0;i<size;i++)
			{
				visited[i] = false;
				for(int j = 0 ; j<size ; j++)
					adjMatrix[i][j] = 999999;
			}
		
		}
		
		void addEdge(int s, int d)					//Adding an edge to the graph if directed, only adds s->d
		{
			adj[s].push_back(d);					//Adds a list of childres to each noe telling who and all are connected
		}
		
		void addUndirectedEdge(int s, int d)		//Adding edge to an undirected graph, i.e. adds both ways , s->d and d->s
		{
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
		
		void addAdjacencyMatrixEdge(int s, int d, int w)//Here the data is represented as adjacency matrix , adj[a][b] is the distance from a to b
		{
			adjMatrix[s][d] = w;
		}
		
		void addUndirectedAdjacencyMatrixEdge(int s, int d, int w)//Here the data is represented as an undirected adjacency matrix , adj[a][b] is the distance from a to b
		{
			adjMatrix[s][d] = w;
			adjMatrix[d][s] = w;
		}
		
		
		
		
		
		
		
		//-----Algorithms
		
		void BFS(int s) 							// s is the start
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
		
		
		void DFS(int s) 								// s is the start
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
		Graph g;									//Set size at the top
	
	//----------As adjacency LIST					//Initialising a graph of size 4
	/*g.addEdge(0, 1);								//Adding directed edge, 0->1
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);*/
    
    
    //--------As Adjacency matrix				
 	/*g.addUndirectedAdjacencyMatrixEdge(5,3,0);*/
   
    

	return 0;
}
