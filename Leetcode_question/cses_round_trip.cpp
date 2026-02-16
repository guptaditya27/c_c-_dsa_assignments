#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
bool dfs(int node,unordered_map<int,vector<int>>&adj,vector<int>&result,vector<int>&visited){

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    vector<int>cycle;
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>>adj;
    vector<vector<int>>edge(n+1);
    vector<int>visited(n+1,0);
    vector<int>parent(n+1,-1);
    vector<int>result;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        edge[i][0]=a;
        edge[i][1]=b;
    }
    for(int i=0;i<edge.size();i++){
        adj[edge[i][0]].push_back(edge[i][1]);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            result.clear();
            dfs(i,adj,result,visited);
        }
    }

    cout<<result.size()<<endl;
    for(int X:result){
        cout<<X<<" ";
    }

    return 0;
}