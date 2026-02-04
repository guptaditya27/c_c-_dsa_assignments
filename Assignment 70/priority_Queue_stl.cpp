#include<iostream>
using namespace std;
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<string>
int main()
{
   // string str;
   // str.append(3,'A');
   // str.erase(str.begin()+1);
   // str.find()
   // cout<<str;
   vector<vector<int>>V;
   for(int i=0;i<3;i++){
      vector<int> *v1=new vector<int>();
      v1->insert(v1->end(),{10,20,30});
      V.insert(V.end(),v1);
   }
   for(auto X:V){
      for(auto i:X){
         cout<<i<<" ";
      cout<<endl;
      }
         

   return 0;
}