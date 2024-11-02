#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int minute;
        int sec;
    public:
        Time();
        Time(int,int,int);
        Time(int,int);
        Time(int);
        void print();
};
void Time::print()
{
    cout<<hour<<":"<<minute<<"::"<<sec<<endl;
}
Time::Time()
{
    hour=12;
    minute=00;
    sec=00;

}
Time::Time(int x)
{
    hour=x;
    minute=0;
    sec=0;

}
Time::Time(int x,int y)
{
    hour=x;
    sec=0;
    if(y>=60)
    {
       minute=y%60;
       hour=hour+y/60; 
    }
    else{
        minute=y;
    }

}
Time::Time(int x,int y,int z)
{
    hour=x;
    minute=y;
    sec=z;
    if(sec>=60)
    {
        minute=minute+sec/60;
        sec=sec%60;
    }
    if(minute>=60)
    {
        hour=hour+minute/60;
        minute=minute%60;
    }
    
}

int main()
{
   Time T(11,61,65);
   T.print();

   return 0;
}