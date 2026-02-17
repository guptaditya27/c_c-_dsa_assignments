#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include <climits>
void dijkstra(unordered_map<long long,vector<pair<long long,long long>>>&adj,vector<long long>&distances,long long src,long long n,long long m){

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    unordered_map<long long,vector<pair<long long,long long>>>adj;
    for(int i=0;i<m;i++){
        int first;
        int second;
        int weight;
        cin>>first>>second>>weight;
        adj[first].push_back({second,weight});
    }
    long long src=1;
    int V=n+1; // no of nodes
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
    vector<long long>distances(V,LLONG_MAX);
    distances[src]=0;
    pq.push({0,src}); // distance for src to src is zero
    while(!pq.empty()){
        auto pr=pq.top();
        pq.pop();
        long long dist_parent_or_calling_node_from_src=pr.first;
        long long node=pr.second;
        if(dist_parent_or_calling_node_from_src > distances[node]) continue;
        for(auto&nbr_info:adj[node]){ // thats why we created new node variable
            long long nbr=nbr_info.first,
            weight=nbr_info.second;
            long long saved_dist_of_nbr_from_src=distances[nbr];
            long long new_dist_of_nbr_from_src=dist_parent_or_calling_node_from_src+
            weight;
            if(new_dist_of_nbr_from_src<saved_dist_of_nbr_from_src){
                pq.push({new_dist_of_nbr_from_src,nbr});
                distances[nbr]=new_dist_of_nbr_from_src;
            }
        }
    }
    for(long long i=1;i<=n;i++){
        cout<<distances[i]<<" ";
    }
    return 0;
}