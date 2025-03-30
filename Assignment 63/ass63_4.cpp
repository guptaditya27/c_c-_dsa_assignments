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
    // Display using Explicit iterator and all types of explicit iterator
    //1. vector provides Random Acess iterator.
    vector<string>::iterator it;
    vector<string>::reverse_iterator it1;
    vector<string>::const_iterator it2;
    vector<string>::const_reverse_iterator it3;


    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    for(it1=v1.rbegin();it1!=v1.rend();it1++)
        cout<<*it1<<" ";
    cout<<endl;

    for(it2=v1.cbegin();it2!=v1.cend();it2++)
        cout<<*it2<<" ";
    cout<<endl;


    for(it3=v1.crbegin();it3!=v1.crend();it3++)
        cout<<*it3<<" ";
    cout<<endl;
    
    return 0;
}