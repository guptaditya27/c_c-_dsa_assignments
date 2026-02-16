#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<unordered_map>
#include<algorithm>
int main() {
    const int MOD=1e9+7;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    queue<int>q;
    vector<int>indegree(n+1,0);
    vector<long long>dp(n+1,0);
    for(int i=0;i<m;i++){
       int a;
       int b;
       cin>>a>>b; 
       adj[a].push_back(b);
       indegree[b]++;
    }
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    dp[1]=1;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        for(int &nbr:adj[f]){
            dp[nbr]=(dp[nbr]+dp[f])%MOD;
            indegree[nbr]--;
            if(indegree[nbr]==0)
                q.push(nbr);
        }
    }
    cout<<(dp[n]%MOD);
    



    

    return 0;
}