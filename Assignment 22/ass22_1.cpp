#include<iostream>
using namespace std;
int len_str(char*);
int main()
{
   char str[5]="A";
   cout<<len_str(str);
   return 0;
}
int len_str(char*c)
{
    int i=0;
    while(*(c+i))
        i++;
    return i;
}