#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
#include<vector>


int main()
{
   vector<int> given_vector={2,4,10,5,7,6,15,20,3,9};
   
   vector<vector<int>> v1;
   vector<int> *ptr;
   int i=0,s,e,j=0;
   while(i<given_vector.size()-1){
    s=i;
    while(i<given_vector.size()-1&&given_vector.at(i)<given_vector.at(i+1)){
        i++;
    }
    e=++i;// end value is exclusive so ++i .
    ptr=new vector<int>();
    ptr->insert(ptr->begin(),given_vector.begin()+s,given_vector.begin()+e);
    v1.insert(v1.begin()+j,*ptr);
    j++;

   }
   for(auto x:v1){
    for(auto y:x)
        cout<<y<<" ";
    cout<<endl;
   }
    return 0;
}