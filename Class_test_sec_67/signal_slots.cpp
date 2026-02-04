#include <iostream>
#include<vector>
#include<string>
using namespace std;
void solve(int n,vector<string>&ans,string &temp){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    temp.push_back('H');
    solve(n,ans,temp);
    temp.pop_back();
    if(temp.size()==0||temp.back()!='L'){
        temp.push_back('L');
        solve(n,ans,temp);
        temp.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>ans;
    int n=0;
    string temp="";
    cout<<"Enter N value :- "<<endl;
    cin>>n;
    solve(n,ans,temp);
    for(auto X:ans){
        cout<<X<<endl;
    }
    return 0;
}
