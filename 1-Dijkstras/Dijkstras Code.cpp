//Graph Template

#include<list>
#include<iostream>
using namespace std;
const int size = 9;

class Graph
{
	bool *visited;									//Visited node or not
	int adjMatrix[size][size];
	list<int> q ; 									//Queue
	public:
	
	Graph()
	{
		visited = new bool[size];
		for(int i=0;i<size;i++)
		{
			visited[i] = false;
			for(int j = 0 ; j<size ; j++)
				adjMatrix[i][j] = 999999;
		}
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
		
	void disp()
	{
			for(int i =0;i<size;i++)
			{
				cout<<"\n";
				for(int j=0;j<size;j++)
				{
					cout<<" "<<adjMatrix[i][j];
				}
			}
		}
		
	void Dijkstras(int s)						//s is the start
	{
			visited[s] = true;
			q.push_back(s);
			list<int>::iterator qi;
			int minDist,bestPos,visitCount=1;
			
			while(visitCount<size)
			{
				minDist = 999999;
				cout<<" "<<s;
				//Adding all children to queue
				for(int i = 0 ; i<size ; i++)
				{
					if(adjMatrix[s][i]!=999999&&!visited[i])
					q.push_back(i);				
					
				}
				//Finding best in queue and setting it as the root
				for(qi=q.begin();qi!=q.end();qi++)
				{
					if(adjMatrix[s][*qi]<minDist&&!visited[*qi])
					{
						minDist = adjMatrix[s][*qi];
						bestPos = *qi; 
					}
				}
				cout<<"\nBestpos:"<<bestPos;
				cout<<"\nQueue status : ";
				for(qi=q.begin();qi!=q.end();qi++)
				{
					cout<<"\t"<<*qi;
				}
				visited[bestPos]=true;
				visitCount++;
				s = bestPos;
				
				
			}
	
		}
};




int main()
{
		Graph g;	
		g.addUndirectedAdjacencyMatrixEdge(0,1,4);
		g.addUndirectedAdjacencyMatrixEdge(0,7,8);
		g.addUndirectedAdjacencyMatrixEdge(1,7,11);
		g.addUndirectedAdjacencyMatrixEdge(1,2,8);
		g.addUndirectedAdjacencyMatrixEdge(7,8,7);
		g.addUndirectedAdjacencyMatrixEdge(7,6,1);
		g.addUndirectedAdjacencyMatrixEdge(8,6,6);
		g.addUndirectedAdjacencyMatrixEdge(2,8,2);
		g.addUndirectedAdjacencyMatrixEdge(2,3,7);
		g.addUndirectedAdjacencyMatrixEdge(2,5,4);
		g.addUndirectedAdjacencyMatrixEdge(6,5,2);
		g.addUndirectedAdjacencyMatrixEdge(5,4,10);
		g.addUndirectedAdjacencyMatrixEdge(3,4,9);
		g.addUndirectedAdjacencyMatrixEdge(3,5,14);
		g.Dijkstras(0);
	//	g.disp();
		return 0;
}


