#include<iostream>
using namespace std;
#include<algorithm>
#include<stdio.h>
#include<string>
#include<stack>
#include<deque>
#include<vector>
#define underflow

/*
   stack is a derived container deafult implemented using dequeue
   stack or derived container's doesn't support iterator's
   template<class X>
   stack<X> S // dequeue
   stack<X,vector<X>> s2 // stack using vector
   stack<X,list<X>> s3 // stack using list
   stack<X,array<X>> s4// stack using array.
*/
int main()
{
   stack<int>S1;
   stack<string>S2;
   stack<char>S3;
   S1.push(10);
   S1.push(20);
   S1.push(30);
   cout<<S1.top()<<endl;
   S1.pop();
   cout<<S1.top()<<endl;
   S1.pop();
   cout<<S1.top()<<endl;
   // try{
   //    if(S1.pop()==0)
   //       throw underflow;// stack empty use explicit exception handling to 
   //    cout<<S1.top()<<endl;
   // }
   // catch(underflow){
   //    if(underflow)
   //       cout<<"stack lahytm";
   // }
   
   S1.push(20);
   cout<<S1.top()<<endl;

   S1.empty()==1?cout<<"true":cout<<"false";
   cout<<endl;
   

   //stack<int>s4={11,22,33}; // doesn't support initializer list .
   // S1.swap(s4);

   // S1.emplace(10);
   // cout<<S1.top();


   stack<int,vector<int>> s4;
   s4.push(10);
   cout<<s4.top()<<endl;
   

   




   return 0;
}