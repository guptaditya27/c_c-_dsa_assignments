#include<iostream>
using namespace std;
int main()
{
   //max of two no;
   int a,b;
   cout<<"Enter two numbers:- ";
   cin>>a>>b;
   if(a-b==0)
   {
    cout<<"Both are equal ";
   }
   else{
    a-b>0?cout<<a<<" is greater ":cout<<b<<" is greater";
   }
   return 0;
}