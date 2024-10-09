#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
   cout<<add(1,1);
   return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}