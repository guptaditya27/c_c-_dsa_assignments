#include<iostream>
using namespace std;
#include<stdio.h>
class Complex{
    private:
        int a,b;
    public:
        Complex();
        Complex(int a,int b):a(a),b(b){}
        void set_data(int,int);
        void Display();
};

Complex::Complex(){
    this->a=0;
    this->b=0;
}
void Complex::set_data(int a,int b){
    this->a=a;
    this->b=b;
}
void Complex::Display(){
    if(this->b<0){
        cout<<this->a<<this->b<<"j"<<endl;
    }
    else{
        cout<<this->a<<"+"<<this->b<<"j"<<endl;
    }
}
Complex* set(){
    int a,b;
    cout<<"input real and imginary no:- "<<endl;
    cin>>a>>b;
    Complex *c;
    c=new Complex;
    c->set_data(a,b);
    return c;

}
int main()
{
   Complex p;
   p=set();
   p.Display();

   return 0;
}