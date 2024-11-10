#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex();
        Complex(int,int=0);
        void print();
        void input(int,int=0);
        Complex operator+(Complex &);
        Complex operator -(Complex &);
        Complex operator *(Complex &);
        Complex operator/(Complex &);
        bool operator==(Complex &);
        Complex operator=(Complex &);
        
        
};
Complex::Complex()
{
    real=0;
    imaginary=0;
}
Complex::Complex(int x,int y):real(x),imaginary(y)
{}
void Complex::print()
{
    cout<<"Z="<<real<<"+"<<imaginary<<"i"<<endl;
}
void Complex::input(int x,int y)
{
    real=x;
    imaginary=y;
}
Complex Complex::operator+(Complex &C)
{
    Complex p;
    p.real=C.real+real;
    p.imaginary=C.imaginary+imaginary;
    return p;
}
Complex Complex::operator-(Complex &C)
{
    Complex p;
    p.real=real-C.real;
    p.imaginary=imaginary-C.imaginary;
    return p;
}
Complex Complex::operator*(Complex &C)
{
    Complex p;
    p.real=(real*C.real-imaginary*C.imaginary);
    p.imaginary=(real*C.imaginary+imaginary*C.real);
    return p;
}
Complex Complex::operator/(Complex &C)
{
    Complex p;
    p.real=(real*C.real+imaginary*C.imaginary)/(C.real*C.real+C.imaginary*C.imaginary);
    p.imaginary=(imaginary*C.real-real*C.imaginary)/(C.real*C.real+C.imaginary*C.imaginary);
    return p;
}
bool Complex::operator==(Complex &C)
{
    if(C.real==real&&C.imaginary==imaginary)
        return 1;
    return 0;
}
Complex Complex::operator=(Complex &C)
{
    
    real=C.real;
    imaginary=C.imaginary;
    return *this;

}

int main()
{
   Complex P(10,12),k(11,-2);
    Complex W=P;
    
    W.print();
   return 0;
}