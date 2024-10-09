#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    cout<<power(2,3);
    return 0;
}
int power(int x,int y)
{
    int num=x;
    for(int i=1;i<y;i++)
    {
        num*=x;
    }
    return num;

}