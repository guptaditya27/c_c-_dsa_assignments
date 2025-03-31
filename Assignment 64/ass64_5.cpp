#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
#include<vector>

int main()
{
   vector<vector<int>> vec={{-1,2,6,31},{9,7,3,5},{11,22,33,44,17}};
   vector<int> v1;
   v1.insert(v1.begin(),vec.at(0).begin(),vec.at(0).begin()+3);
   v1.insert(v1.end(),vec.at(1).begin(),vec.at(1).begin()+2);
   v1.insert(v1.end(),vec.at(2).begin(),vec.at(2).end());
   for(auto x:v1){
    cout<<x<<" ";
   }
   cout<<endl;
    return 0;
}