#include <iostream>
using namespace std;
#include<queue>
#include<vector>
#include<unordered_map>
void bfs(int node,vector<int>&visited,unordered_map<int,vector<int>>&adj){
    visited[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int f=q.front();
        cout<<f<<" ";
        q.pop();
        for(auto nbr:adj[f]){
            if(!visited[nbr]){
                visited[nbr]=1;
                q.push(nbr);

            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v=0,e=0;
    cin>>v>>e;
    vector<int>visited(v,0);
    vector<vector<int>>edges;
    for(int i=0;i<e;i++){
        int node1;
        cin>>node1;
        int node2;
        cin>>node2;
        edges.push_back({node1,node2});
    }
    unordered_map<int,vector<int>>adj;
    for(auto&X:edges){
        int a=X[0];
        int b=X[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<v;i++){
        if(!visited[i])
            bfs(i,visited,adj);
    }
    return 0;
}