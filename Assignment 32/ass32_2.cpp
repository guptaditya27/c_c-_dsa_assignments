#include<iostream>
using namespace std;
class Date_time
{
    private:
        int hour,min,sec;
        int day,month,year;
    public:
        void set_time(int=12,int=00,int=00);
        void set_date(int=01,int=01,int=2000);
        void display_time();
        void display_date();
        void display_all();


};
void Date_time::set_time(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}
void Date_time::display_time()
{
    cout<<hour<<" hr "<<min<<" min "<<sec<<"sec"<<endl;
}
void Date_time::set_date(int d,int m,int y)
{
    day=d,month=m,year=y;
}
void Date_time::display_date()
{
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}
void Date_time::display_all()
{
    cout<<"     "<<hour<<":"<<min<<endl;
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}

int main()
{
    Date_time d;
    d.set_date(14,9,2024);
    d.set_time(7,21);
    d.display_date();
    d.display_time();
    d.display_all();
   return 0;
}