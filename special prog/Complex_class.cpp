// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<math.h>
class Complex{
    private:
        int real,imaginary;
        
    public:
        Complex(int=0,int=0);
        Complex(Complex&);
        void Input(int=0,int=0);
        Complex operator+(Complex &);
        Complex operator-(Complex&);
        Complex operator/(Complex&);
        Complex operator*(Complex&);
        bool operator>(Complex&);
        bool operator<(Complex&);
        bool operator==(Complex&);
        void print();
        double magnitude();
        
        
};
Complex::Complex(Complex&C)
{
    real=C.real;
    imaginary=C.imaginary;
}
double Complex::magnitude()
{
    double k,z;
    k=(real*real)+(imaginary*imaginary);
    z=sqrt(k);
    return z;
}
void Complex::Input(int a,int b)
{
    
    real=a;
    imaginary=b;
 
}
void Complex::print()
{
    if(imaginary>=0)
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    else{
        cout<<real<<imaginary<<"i"<<endl;
    }
    
}
Complex Complex::operator+(Complex&C)
{
    Complex N;
    N.real=real+C.real;
    N.imaginary=imaginary+C.imaginary;
    return N;
}
Complex::Complex(int real,int imaginary):real(real),imaginary(imaginary)
{}
Complex Complex::operator-(Complex&C){
    Complex d;
    d .real=real-C.real;
    d.imaginary=imaginary-C.imaginary;
    return d;
    
}
Complex Complex::operator*(Complex&C)
{
    Complex d;
    d.real=(real*C.real)-(imaginary*C.imaginary);
    d.imaginary=real*C.imaginary+imaginary*C.real;
    return d;
}
Complex Complex::operator/(Complex&C)
{
    try{
        Complex N;
        if(C.real<=0&&C.imaginary<=0){
           throw(1); 
        }
            
        int k=C.real*C.real+C.imaginary*C.imaginary;
        N.real=(real*C.real+imaginary*C.imaginary)/k;
        N.imaginary=(imaginary*C.real-real*C.imaginary)/k;
        return N;
    }catch(int e)
    {
        Complex j;
        if(e==1)
            cout<<"Zero Division Error !!";
            
        return j;
        
    }
    
}
bool Complex::operator==(Complex&C)
{
    if(real==C.real&&imaginary==C.imaginary)
        return 1;
    else{
        return 0;
    }
}
bool Complex::operator>(Complex&C)
{
    if(magnitude()>C.magnitude())
        return 1;
    return 0;
}
bool Complex::operator<(Complex&C)
{
    if(magnitude()<C.magnitude())
        return 1;
    return 0;
}




int main()
{
    Complex c(3,-4),p;
    Complex d=c;
    d.print();
    p.Input(-3,5);
    cout<<p.magnitude()<<endl;
    cout<<(c==p)<<"  "<<(p>c)<<endl;
    //d=c/d;
    p.print();
    
    return 0;
}

