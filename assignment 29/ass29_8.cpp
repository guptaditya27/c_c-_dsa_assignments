#include<iostream>
using namespace std;
int main()
{
   //swapping two variables 
   // 1. using + - operator
   int x,y;
   cout<<"Enter Two Numbers:- ";
   cin>>x>>y;
   /*x=x+y;
   y=x-y;
   x=x-y;*/
   
   /*x=x*y;
   y=x/y;
   x=x/y;*/
   // single line airthematic instruction
   //y=x+y-(x=y);

   //using xor opreator
   x=x^y;
   y=x^y;
   x=x^y;



   cout<<x<<" "<<y;
   return 0;
}