#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void setvalue(int,int);
        void getvalue();

};
void Complex::setvalue(int r,int i)
{
    real=r;
    imaginary=i;
}
void Complex::getvalue()
{
    cout<<real<<" + "<<imaginary<<"i"<<endl;
}
int main()
{
   Complex c1,c2;
   c1.setvalue(3,4);
   c1.getvalue();
    return 0;
}