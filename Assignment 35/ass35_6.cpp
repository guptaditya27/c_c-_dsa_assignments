#include<iostream>
using namespace std;
#include<stdio.h>
class Num{
    private:
        int x,y,z;
    public:
        Num(int x,int y,int z):x(x),y(y),z(z){}
        Num& operator -();
        void print();

};
void Num::print()
{
    cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
}
Num& Num::operator-()
{
    x=-x;
    y=-y;
    z=-z;
    return *this;
}
int main()
{
   Num W(1,2,3);
   -W;
   W.print();

   return 0;
}