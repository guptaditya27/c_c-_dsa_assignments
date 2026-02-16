#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
int n;int m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    vector<vector<int>>edge;
    for(int i=0;i<n;i++){
        int a=0;
        int b=0;
        cin>>a>>b;
        edge.push_back({a,b});
    }
    unordered_map<int,vector<int>>adj;
    for(int i=0;i<n;i++){
        
    }
    return 0;
}