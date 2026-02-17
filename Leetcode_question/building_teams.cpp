#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<algorithm>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    // nne to detect cycle if its of odd leangth or not.
    
    return 0;
}