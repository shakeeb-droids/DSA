#include <bits/stdc++.h>
using namespace std;

bool getpath(int **edges,int n,bool *visited,int start,int end,vector<int> &vec){
    if(start==end){
        vec.push_back(start);
        return true;
        
    }
    visited[start]=true;
    
    bool result=false;
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && edges[start][i]==1)
        {   
            //
            result=getpath(edges,n,visited,i,end,vec);
        }
        if(result==true)
        {
            vec.push_back(start);
            return true;
        }
    }
    return result; 
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    int **edges=new int *[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
        
    }
    
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    
    
    
    int start,end;
    cin>>start>>end;
    
    vector<int> vec;
    
    if(getpath(edges,n,visited,start,end,vec)){
       for(int i=0;i<vec.size();i++){
           cout<<vec[i]<<" ";
       }
        
    }
    
    
    
    delete []  visited;
    for(int i=0;i<n;i++){
        delete []edges[i];
        
    }
    delete []edges;
    
}