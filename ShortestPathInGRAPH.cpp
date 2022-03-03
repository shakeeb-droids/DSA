#include<bits/stdc++.h>
using namespace std;
vector<int> BFS(int** adj, int n, bool* visited, vector<int> shortestPath, int source, int destination, unordered_map<int, int>map, queue<int> q)
{
	//MAY HAPPEN CASES
	//User gives source node and destination node same which 
	//means it calls onto the same node, thus creating a path on itself
	if(source == destination)
	{
		shortestPath.push_back(source);
		return shortestPath;
	}
	
	//Else we call the bfs to find it

	//Since we have been given the source node which means we have visited that node 
	//and we dont need to visit again.

	q.push(source);
	
	visited[source] = true;
	bool flag =false;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		for(int i=0;i<n;i++)
		{
			//Case may happen that the node visited is again equals to i
			//So we dont visit
			if(node == i)
			{
				continue;
			}

			if(adj[node][i] == 1)
			{
				if(!visited[i])
				{
					visited[i] = true;
					q.push(i);
					//Maintaining a map. Stores connected nodes;
					map[i] = node;

				}
			}
			if(i == destination)
			{
				flag = true;
				break;
			}
		}
		if(flag == true)
		{
			break; //From while loop who checks emptiness of queue
		}
	}
	//CASE MAY HAPPEN. There exists disconnected components in graph.
	int current = destination;
	while(current!=source)
	{
		shortestPath.push_back(current);//As in reverse fashin we store the destination and next node

		//Since map has the value corresponding to node connected
		current = map[current]; //Returns value to its mapping key/

	}
	shortestPath.push_back(current); // Last node stored;
	return shortestPath;

}
int main()
{
	int n,e;
	cin>>n >> e;

	int **adj = new int*[n];
	//ADJACENCY MATRIX
	for(int i=0;i<n;i++)
	{

		adj[i] = new int[n];
		for(int j=0;j<n;j++)
		{
			adj[i][j] = 0;
		}
	}
	//Take inputs;
	for(int i=0;i<n;i++)
	{
		int f,s;
		cin>>f>>s;
		adj[f][s] = 1;
		adj[s][f] = 1;
	}
	//Maintaing array for nodes that are already visited;
	bool *visited = new bool[n];
	memset(visited, false, n*sizeof(bool));

	//TO DO
	//1. Return the shortest path for given input v1 and v2
	//2. Return in reverse order.

	int v1, v2;
	cin>>v1>>v2;

	queue<int> q;

	vector<int> shortestPath;

	unordered_map<int, int> map;

	shortestPath = BFS(adj, n, visited, shortestPath, v1, v2, map, q);

	for(int i=0;i<shortestPath.size();i++)
	{
		cout << shortestPath[i];
		if(i<shortestPath.size()-1)
		cout << " to " ;
	}


}