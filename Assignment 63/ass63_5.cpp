#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>

int main()
{
    vector<int> v1={3};
    vector<int>v2;
    vector<int>::iterator it;
    it=v1.begin();
    while(*it){
        
        if(it==v1.end()-2||it==v1.end())
            break;
        
        if(*(it+1)<*it&&*(it+1)<*(it+2))
            v2.push_back(*(it+1));
        
        it++;
    }
    //cout<<*(v1.end()-1)<<endl;
    for(auto X:v2)
        cout<<X<<" ";
    return 0;
}