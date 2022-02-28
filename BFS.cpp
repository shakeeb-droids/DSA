#include<bits/stdc++.h>
using namespace std;
printBFS(int adjacency[][40], int n , int visited[], int start)
{
	// Queue to store the children of current node
	queue<int> q; 
	// push the current node
	q.push(start); 
	// mark the visited array as 1 so that there is no possibility of
	//infite calls to the same nodes
	visited[start] = 1; 

	
	

	while(!q.empty())
	{
		int curentVertex = q.front();
		q.pop();
		cout << curentVertex <<endl;
		for(int i=0;i<n;i++)
		{
			if(adjacency[curentVertex][i] == 1 && visited[i] !=1)
			{
				q.push(i);
				visited[i] = 1;
			}
		}
	}


}


 int main()
 {
 	int n;
 	cin>>n;
 	int e;
 	cin>>e;

 	int adjacency[40][40];
 	//Intitally adjacency will have 0 values
 	memset(adjacency, 0 , 40*40*(sizeof(int)));
 	//Accepting the nodes and inserting it and making edge between
	for(int i=0;i<e;i++)
	{
		int first,second;
		cin>>first>>second;
		adjacency[first][second] = 1;
		adjacency[second][first] = 1;
	}
 	

 	int visited[n];
 	memset(visited, 0 , n*sizeof(int));

 	printBFS(adjacency, n , visited, 0);
 }