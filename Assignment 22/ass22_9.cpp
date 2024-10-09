#include<iostream>
using namespace std;
void swap_str(int,int,char*);
int main()
{
   char str[]="Rajuram";
   swap_str(3,5,str);
   cout<<str;


   return 0;
}
void swap_str(int index1,int index2,char *c)
{
    int size=0;
    while(c[size])
        size++;
    if(index1<0||index2>size||index1>size||index2<0)
    {
        cout<<"Invalid Index Values !!!";
    }
    else{
        int w=c[index1];
        c[index1]=c[index2];
        c[index2]=w;
    }
}