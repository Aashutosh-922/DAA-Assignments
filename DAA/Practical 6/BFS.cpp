#include<bits/stdc++.h>
using namespace std;

void BFS(int n,vector<int>adj[],int start){
    vector<int>vis(n,0);
    queue<int>q;

    q.push(start);
    vis[start]=1;

    while(!q.empty()){
      auto x=q.front();
      q.pop();
      cout<<x<<" ";
      for(auto it:adj[x]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
      }
    }
    cout<<endl;
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
   BFS(n,adj,start);
}

// Output :
// Enter number of nodes and edges : 
// 5 4
// 0 1 
// 0 2
// 0 3
// 2 4
// Enter start node : 0
// 0 1 2 3 4