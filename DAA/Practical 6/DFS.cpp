#include<bits/stdc++.h>
using namespace std;

void DFS(int n,vector<int>adj[],int start,vector<int>&vis){
    if(!vis[start]){
        cout<<start<<" ";
        vis[start]=1;
        for(auto it:adj[start]){
            DFS(n,adj,it,vis);
        }
    }
    return;
}
int main(){
   int n,m;
   cout<<"Enter number of nodes and edges : "<<endl;;
   cin>>n>>m;

   vector<int>adj[n+1];
   for(int i=0;i<m;i++){
      int x,y;
      cin>>x>>y;
      adj[y].push_back(x);
      adj[x].push_back(y);
   }
   int start=0;
   cout<<"Enter start node : ";
   cin>>start;
   vector<int>vis(n+1,0);
   DFS(n,adj,start,vis);
}

