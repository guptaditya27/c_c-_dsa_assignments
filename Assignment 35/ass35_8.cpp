#include<iostream>
using namespace std;
#include<stdio.h>
class Distance{
    private:
        int km,m,cm;
    private:
        void simplify();

    public:
        Distance(double=0,double=0,double=0);
        void Conversion();
        Distance operator+(Distance&);
        Distance& operator+=(Distance&);
        Distance operator--(int);//post decrement.
        Distance& operator--();//pre decrement.
        void print();


};
Distance& Distance::operator--()
{
    cm--;
    simplify();
    return *this;
}
Distance Distance::operator--(int)
{
    Distance d=*this;
    d.cm--;
    d.simplify();
    return d;

}
Distance Distance::operator+(Distance&D)
{
    Distance d;
    d.km=km+D.km;
    d.m=m+D.m;
    d.cm=cm+D.cm;
    d.simplify();
    return d;
}

Distance& Distance::operator+=(Distance&D)
{
    km=km+D.km;
    m=m+D.m;
    cm=cm+D.cm;
    simplify();
    return *this;

}
void Distance::print()
{
    cout<<km<<" km,"<<m<<" mtr,"<<cm<<" cm"<<endl;
}
void Distance::Conversion()
{
    int choice=0;
    cout<<"INPUT Following Choices For Conversion"<<endl<<"1. For Distance in KM"<<endl;
    cout<<"2. For Distance in mtr"<<endl<<"3. For Distance in Cms"<<endl;
    cin>>choice;


    switch(choice)
    {
        case 1:
            cout<<km+cm/100000+m/100<<" kms"<<endl;
            break;
        case 2:
            cout<<m+km*100+cm/100<<" Mtr"<<endl;
            break;
        case 3:
            cout<<cm+km*100000+m*100<<" Cms"<<endl;
            break;
        default:
            cout<<"Invalid Choice Entered !!"<<endl;
    }
}
void Distance::simplify()
{
    if(cm>=100)
    {
       m+=cm/100;
       cm=cm%100; 
    }
    if(m>=1000)
    {
        km+=m/1000;
        m=m%1000;
    }
}
Distance::Distance(double k,double mt,double c):km(k),m(mt),cm(c)
{
   try{

    if(km<0||m<0||cm<0)
    {
        throw 1; 
    } 
    else
    {
        simplify();
        //print();
    }
   }
   catch(int e)
   {
    if(e==1)
    {
        cout<<"Distance parameter Can't be Negative"<<endl;
        km=0;
        cm=0;
        m=0;
        print();
    }
   }
}
int main()
{
   //Distance D(1,1200,12);
   Distance D2(11,1800,123);

   Distance D1(11,1800,123);
   //Distance p;
   D1--;
   D1.print();
   --D2;
   D2.print();


   //D.Conversion(); 
   return 0;
}