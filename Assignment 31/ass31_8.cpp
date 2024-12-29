#include<iostream>
using namespace std;
#include<string.h>
void print_sub(char*,int,int=-1);
void print_sub(char*c,int start,int end)
{
    if(end==-1)
    {
        end=strlen(c);
    }
    for(int i=start;i<end;i++)
        cout<<c[i];
    cout<<endl;
}
int main()
{
   char c[30]="rajukibiwimkichutdi";
   print_sub(c,5);
   return 0;
}