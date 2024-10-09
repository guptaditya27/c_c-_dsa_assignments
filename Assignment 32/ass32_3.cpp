#include<iostream>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        void setdate(int=1,int=1,int=2000);
        void getdate();
};
void Date::setdate(int d,int m,int y)
{
    day=d,month=m,year=y;
}
void Date::getdate()
{
    cout<<"d="<<day<<", m="<<month<<", y="<<year<<endl;
}
int main()
{
    Date d;
    d.setdate();
    d.getdate();

    return 0;
}

