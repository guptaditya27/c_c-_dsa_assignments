#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time add(Time);
        bool is_greater(Time);
};
int main()
{
   Time t1,t2;
   t1.setTime(12,68,79);
   t1.normalize();
   t1.showTime();
   t2.setTime(12,68,89);
   t2.normalize();
   cout<<t2.is_greater(t1);
   return 0;
}
void Time::setTime(int hour,int minute,int second)
{
    h=hour,m=minute,s=second;
}
void Time::showTime()
{
    cout<<h<<":"<<m<<" "<<s<<endl;
}
void Time::normalize()
{
    //min,sec,hr not greater than 60.
    m=m+s/60;//adding mins to min
    s=s%60;// sec to sec lessthan 60
    h=h+m/60;
    m=m%60;
    
}
Time Time::add(Time t)
{
    Time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    return temp;
}
bool Time::is_greater(Time t)
{
    if(h>t.h)
        return true;
    else if(h==t.h&&m>t.m)
        return true;
    else if(h==t.h&&m==t.m&&s>t.s)
        return true;
    else{
        return false;
    }
}