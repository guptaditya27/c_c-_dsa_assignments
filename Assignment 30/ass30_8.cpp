#include<iostream>
using namespace std;
#include<Cmath>
float area(int);
float area(int,int);
float area(int,int,int);
int main()
{
   cout<<area(3);
   return 0;
}
float area(int radius)
{
    cout<<"Area of circle:- ";
    return 3.14*radius*radius;
}
float area(int l,int b)
{
    cout<<"Area of Rectangle :- ";
    return l*b;
}
float area(int a,int b,int c)
{
    //s=a+b+c/2;
    //area tri = s*(s-a*s-b*s-c)^1/2;
    float s=(a+b+c)/2;
    cout<<"Area of Triangle is:- ";
    return sqrt(s*(s-a)*(s-b)*(s-c));

}