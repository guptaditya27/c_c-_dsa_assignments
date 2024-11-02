#include<iostream>
using namespace std;
class Complex
{
  private:
    int real;
    int imaginary;

  public:
    Complex(int,int);
    void Showdata();

};
Complex::Complex(int x,int y):real(x),imaginary(y)
{}
void Complex::Showdata()
{
    cout<<"Z="<<real<<"+"<<imaginary<<"j"<<endl;
}
int main()
{
   Complex C(10,3);
   Complex arr[2]={Complex(10,5),Complex(11,2)};
   C.Showdata();
    arr[1].Showdata();
    arr[0].Showdata();


   return 0;
}