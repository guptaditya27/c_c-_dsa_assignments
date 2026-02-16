#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<algorithm>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int>indegree(n+1,0);
    vector<int>dp(n+1,0),parent(n+1,-1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        indegree[b]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    dp[1]=1;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        for(int nbr:adj[f]){
            indegree[nbr]--;
            if(dp[f]>0&&1+dp[f]>dp[nbr]){ // if node acting as parent then its dp must be >0 
                                            // this is how we are preventing the non src connectd nodes as src acting redundency
                dp[nbr]=dp[f]+1;
                parent[nbr]=f;
            }
            if(indegree[nbr]==0){
                q.push(nbr);
            }
            
        }
    }
    if(dp[n]==0){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<dp[n]<<endl;
    vector<int> path;
    for (int cur=n;cur!=-1;cur=parent[cur])
        path.push_back(cur);
    reverse(path.begin(),path.end());

    for (int x:path) cout<<x<<" ";

    
    return 0;
}