#include <iostream>
#include<vector>
#include<string>
using namespace std;
void solve(int n,vector<string>&ans,string temp){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    string op1=temp;
    op1.push_back('H');
    string op2=temp;
    op2.push_back('L');
    solve(n,ans,op1);
    solve(n,ans,op2);
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