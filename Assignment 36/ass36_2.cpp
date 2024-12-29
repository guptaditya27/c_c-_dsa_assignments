#include<iostream>
using namespace std;
#include<stdio.h>
class Time{
    private:
        int hr,min,sec;
    public:
        Time(int=12,int=0,int=0);
        void print();
        Time & operator<<(Time &);
        Time & operator>>(Time &);
        Time & operator=(Time &);

        
};
// << & >> using ostream & istream class use .#soln see 
Time & Time::operator=(Time & T)
{
    hr=T.hr;
    min=T.min;
    sec=T.sec;
    return *this;

}        
Time & Time::operator<<(Time &T)
{
    T.hr=hr;
    T.min=min;
    T.sec=sec;
    return *this;


}
Time & Time::operator>>(Time &T)
{
    hr=T.hr;
    min=T.min;
    sec=T.sec;
    return *this;


}

void Time::print()
{
    cout<<hr<<":"<<min<<"::"<<sec<<endl;
}
Time::Time(int hr,int min,int sec):hr(hr),min(min),sec(sec)
{
    print();
}
int main()
{
   Time T(7,11,15);
   Time k;
   k<<T;
   T.print();

   return 0;
}