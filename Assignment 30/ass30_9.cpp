#include<iostream>
using namespace std;
/* overloading functions cant have alag alag return type
they can only have diffrent signature */
/* default decimal datatype ya values are terated as double
Not float */
void max(int,int);
void max(double,double);
int main()
{
   max(1.33,1.22);
   return 0;
}
void max(int a,int b)
{
    a>b?cout<<a<<" is Greater ":cout<<b<<" is Greater";
}
void max(double a,double b)
{
    a>b?cout<<a<<" is Greater ":cout<<b<<" is Greater";
}