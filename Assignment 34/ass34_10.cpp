#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
class Circle{
    private:
        double radius;
    public:
        Circle(int);
};
Circle::Circle(int radius):radius(radius)
{
    cout<<radius<<endl;
}


int main()
{
   return 0;
}