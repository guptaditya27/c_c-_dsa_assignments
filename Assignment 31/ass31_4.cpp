#include<iostream>
using namespace std;
int lcm(int,int);
int lcm(int,int,int);
int main()
{
   cout<<lcm(15,25,5);
    return 0;
}
int lcm(int a,int b)
{
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
            return i;
    }
}
int lcm(int a,int b,int c)
{
    for(int i=1;i<=a*b*c;i++)
    {
        if(i%a==0&&i%b==0&&i%c==0)
            return i;
    }
}