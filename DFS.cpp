#include<bits/stdc++.h>
using namespace std;
print(int adjaceny[][40], int n, int sV, int *visited)
{
	cout<<sV<<endl;
	visited[sV] = 1;
	for(int i=0;i<n;i++)
	{
		//To check If the node visited does not run back to the same recursive calls
		if(visited[i] == 1)
		{
			continue;
		}
		//Node will always start with a starting node therfore we use start vertec and check in the matrix 
		//if it is an edge. i;e has 1;
		//If yes we call its neighbouring nodes who make edge
		if(adjaceny[sV][i] == 1)
			print(adjaceny, n, i, visited);
	}
}

int main()
{
	int n;
	cin>>n;
	int e;
	cin>>e;

	int adjaceny[40][40];
	//Initialize the adjaceny matrix with zero as nodes that will get connected will have 1 corresponding to it
	memset(adjaceny, 0, 40*40*(sizeof(int)));

	//Accepting the nodes and inserting it and making edge between
	for(int i=0;i<e;i++)
	{
		int first,second;
		cin>>first>>second;
		adjaceny[first][second] = 1;
		adjaceny[second][first] = 1;
	}
	//After this has been done we are going to print the graph that are connected to each nodes
	int *visited = new int[n];
	memset(visited, 0 , n*sizeof(int));
	print(adjaceny, n, 0, visited);
	// delete [] adjaceny;
	// delete [] visited;

}