#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<stdio.h>
int main()
{
    vector<string> v1;
    v1.push_back("ram");
    v1.insert(v1.end(),"laakshman");
    v1.insert(v1.end(),"Janki");

    for(int i=0;i<=v1.size()-1;i++)
        cout<<v1[i];
    cout<<endl;
    return 0;
}