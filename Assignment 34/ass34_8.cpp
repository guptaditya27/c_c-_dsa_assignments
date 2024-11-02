#include<iostream>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day,int month,int year):day(day),month(month),year(year)
        {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
        
};
int main()
{
   Date(27,03,2005);
   return 0;
}