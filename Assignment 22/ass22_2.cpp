#include<iostream>
using namespace std;
char* rev_str(char*);
int main()
{
   char str[10]="Aditya";
   cout<<rev_str(str);
   return 0;
}
char* rev_str(char *c)
{
    int size=0,i=0,j;
    while(c[size])
        size++;
    size-=1;
    char k[size];
    while(c[i])
    {
        k[i]=c[i];
        i++;
    }
    //cout<<k;
    for(i=0,j=size;j>=0;i++,j--)
    {
        c[i]=k[j];
    }
    return c;
}