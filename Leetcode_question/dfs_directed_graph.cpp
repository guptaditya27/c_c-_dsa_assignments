#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<queue>

bool dfs(unordered_map<int,vector<int>>&adj,int node,vector<int>&visited,vector<int>&current_path){
    visited[node]=1;
    current_path[node]=1;
    for(int nbr:adj[node]){
        if(!visited[nbr]){
            bool res=dfs(adj,nbr,visited,current_path);
            if(res) return true;
        }
        else{
            if(current_path[nbr]==1){
                return true;
            }
        }
        
    }
    current_path[node]=0;
    return false;


    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    vector<vector<int>>edges{{1,2},{2,3},{3,5},{5,7},{3,4},{4,6},{5,6},{8,9},{9,10},{10,8},{8,1}};
    unordered_map<int,vector<int>>adj;
    int maxNode = 0;
    for(auto &e : edges){
        maxNode = max({maxNode, e[0], e[1]});
    }
    vector<int> visited(maxNode+1,0);
    vector<int> current_path(maxNode+1,0);

    for(int i=0;i<edges.size();i++){
        int a=edges[i][0];
        int b=edges[i][1];
        adj[a].push_back(b);
    }
    for(int i=0;i<=maxNode;i++){
        if(!visited[i]){
            bool ans=dfs(adj,i,visited,current_path);
            if(ans==true){ 
                cout<<"cycle-found:-"<<"true";
                return 0;
            }
        }
    }
    cout<<"cycle-found:-"<<"false";
    return 0;
}