#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<unordered_map>
#include<algorithm>
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        // edges is 2d vector
        // edges[0][0]= first node //edges[0][1]=2nd node;
        // edges[0][2] = weight b/nthose two nodes  
        unordered_map<int,vector<pair<int,int>>>adj;
        for(int i=0;i<edges.size();i++){
            int first=edges[i][0];
            int second=edges[i][1];
            int weight=edges[i][2];
            adj[first].push_back({second,weight});
            adj[second].push_back({first,weight});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>distances(V,1e7);
        distances[src]=0;
        pq.push({0,src}); // distance for src to src is zero
        while(!pq.empty()){
            auto pr=pq.top();
            pq.pop();
            int dist_parent_or_calling_node_from_src=pr.first;
            int node=pr.second;
            if(dist_parent_or_calling_node_from_src > distances[node]) continue;
            for(auto&nbr_info:adj[node]){ // thats why we created new node variable
                int nbr=nbr_info.first,
                weight=nbr_info.second;
                int saved_dist_of_nbr_from_src=distances[nbr];
                int new_dist_of_nbr_from_src=dist_parent_or_calling_node_from_src+
                weight;
                if(new_dist_of_nbr_from_src<saved_dist_of_nbr_from_src){
                    pq.push({new_dist_of_nbr_from_src,nbr});
                    distances[nbr]=new_dist_of_nbr_from_src;
                }
            }
        }
        for(int i=0;i<V;i++){
            if(distances[i]==1e7)
                distances[i]=-1;
        }
        return distances;
        
    }
};