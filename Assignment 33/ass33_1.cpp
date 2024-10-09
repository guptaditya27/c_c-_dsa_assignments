#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setdata(int=0,int=0);
        void getdata();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex Multiply(Complex);

};
int main()
{
   Complex c1,c2,c3;
   c1.setdata(3,4);
   c2.setdata(4,5);
   c3=c1.Multiply(c2);
   c3.getdata();
   return 0;
}
void Complex::setdata(int r,int i)
{
    real=r;
    img=i;
}
void Complex::getdata()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
Complex Complex::subtract(Complex c)
{
    Complex temp;
    temp.real=real-c.real;
    temp.img=img-c.img;
    return temp;
}
Complex Complex::Multiply(Complex c)
{
    //a+ib * c+id
    // (ac-bd)+i((ad+bc)
    Complex temp;
    temp.real=real*c.real-img*c.img;
    temp.img=real*c.img+img*c.real;
    return temp;
}