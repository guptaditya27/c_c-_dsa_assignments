#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
#include<algorithm>
int main()
{
   vector<int> v1={20,30,-2,-4,56,63};
   cout<<"original vector "<<endl;
   for(auto x:v1){
      cout<<x<<" ";
   }
   cout<<endl;
   vector<int>::iterator it;
   it=v1.begin();
   while(*it>0){
      it++;
   }
   cout<<"First Negative value is :- "<<*it<<endl;
   v1.erase(it,v1.end());
   cout<<"After Operation : ";
   for(auto x:v1){
      cout<<x<<" ";
   }
   cout<<endl;

   return 0;
}