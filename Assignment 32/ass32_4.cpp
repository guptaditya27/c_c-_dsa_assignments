#include<iostream>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        void setdate(int=1,int=1,int=2000);
        void getdate();
        void Display1();
        void Display2();
};
void Date::setdate(int d,int m,int y)
{
    day=d,month=m,year=y;
}
void Date::getdate()
{
    cout<<"d="<<day<<", m="<<month<<", y="<<year<<endl;
}
void Date::Display1()
{
    cout<<day<<"-"<<month<<"-"<<year<<endl;
}
void Date::Display2()
{
    switch(month)
    {
        case 1:
            cout<<day<<"-"<<"Jan"<<"-"<<year<<endl;
            break;
        case 2:
            cout<<day<<"-"<<"Feb"<<"-"<<year<<endl;
            break;
        case 3:
            cout<<day<<"-"<<"Mar"<<"-"<<year<<endl;
            break;
        case 4:
            cout<<day<<"-"<<"Apr"<<"-"<<year<<endl;
            break;
        case 5:
            cout<<day<<"-"<<"May"<<"-"<<year<<endl;
            break;
        case 6:
            cout<<day<<"-"<<"Jun"<<"-"<<year<<endl;
            break;
        case 7:
            cout<<day<<"-"<<"Jul"<<"-"<<year<<endl;
            break;
        case 8:
            cout<<day<<"-"<<"Aug"<<"-"<<year<<endl;
            break;
        case 9:
            cout<<day<<"-"<<"Sept"<<"-"<<year<<endl;
            break;
        case 10:
            cout<<day<<"-"<<"Oct"<<"-"<<year<<endl;
            break;
        case 11:
            cout<<day<<"-"<<"Nov"<<"-"<<year<<endl;
            break;
        case 12:
            cout<<day<<"-"<<"Dec"<<"-"<<year<<endl;
            break;
        default:
            cout<<"Not Valid Input !!!"<<endl;
    }
}


int main()
{
    Date d;
    d.setdate(7,01,2004);
    d.getdate();
    d.Display2();

    return 0;
}

