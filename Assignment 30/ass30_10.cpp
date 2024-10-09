#include<iostream>
using namespace std;
# include<stdio.h>

int add(int,int);
int add(int,int,int);
double add(double,double);
double add(double,double,double);
int main()
{
   add(3.14,1.22,2.56);
   return 0;
}
int add(int a,int b)
{
    cout<<a+b;
}
void add(int a,int b,int c)
{
    cout<<a+b+c;
}
void add(double a,double b)
{
    cout<<a+b;
}
void add(double a,double b,double c)
{
    cout<<a+b+c;
}
