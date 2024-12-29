#include<iostream>
using namespace std;
#include<stdio.h>
class Complex{
    private:
        int real,imaginary;
    public:
        Complex();
        Complex(int,int);
        void print();
        friend Complex operator+(Complex&,Complex&);
        friend Complex operator-(Complex&,Complex&);
        friend Complex operator*(Complex&,Complex&);


};
Complex operator*(Complex& C,Complex&D)
{
    Complex P;
    P.real=C.real*D.real-C.imaginary*D.imaginary;
    P.imaginary=C.imaginary*D.real+C.real*D.imaginary;
    return P;   
}
Complex operator+(Complex& C,Complex&D)
{
    Complex P;
    P.real=C.real+D.real;
    P.imaginary=C.imaginary+D.imaginary;
    return P;   
}
Complex operator-(Complex& C,Complex&D)
{
    Complex P;
    P.real=C.real-D.real;
    P.imaginary=C.imaginary-D.imaginary;
    return P;   
}
void Complex::print()
{
    cout<<"Z="<<real<<"+"<<imaginary<<"i"<<endl;
}
Complex::Complex(int a,int b)
{
    real=a;
    imaginary=b;
    print();
}
Complex::Complex()
{
    real=0;
    imaginary=0;
}
int main()
{
   Complex C(4,-5);
   Complex D(-3,2);
   Complex p=C*D;

   p.print();
   return 0;
}