#include <bits/stdc++.h>
using namespace std;
void islandsConnect(int **adj,int n,int source, bool *visited, int count)
{
    //BASE CONDITION
    // if(source == n - 1)
    // {
    //     return count;
    // }
     visited[source] = true;
     //count=count+1;
   for(int i=0;i<n;i++)
   {
      // if(source == i)continue;
       if(visited[i])
       {
           continue;
       }
       if(adj[source][i] == 0)
       {
          islandsConnect(adj, n, i, visited,count);
       }
   }
    //return count;
    
}
int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    
    int** adj = new int*[n];
    for(int i=0;i<n;i++)
    {
         adj[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            adj[i][j] = 1;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        adj[f][s] = 0;
        adj[s][f] = 0;
    }
    

    bool *visited = new bool[n];
    memset(visited, false, n*sizeof(bool));
    int count = 0;
    int ans=0;
     for(int i=0;i<n;i++){
        if(visited[i] == false){
            islandsConnect(adj, n, i,  visited, count);
            ans++;
        }
    }
    cout<<ans;
    //cout<<islandsConnect(adj, n, 0,  visited, count);
    
    
}