#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>

int main()
{
   vector<int>v3={11,22,33};
   cout<<"Original Vector : ";
   for(auto x:v3){
    cout<<x<<" ";
   }
   cout<<endl;
   v3.insert(v3.end(),3,25);
   cout<<"after Insertion : ";
   for(auto x:v3){
    cout<<x<<" ";
   }
   cout<<endl;
    return 0;
}