// given char in given specified index
#include<iostream>
using namespace std;
int str_char(int,int,char*,char);
int main()
{
   char str[]="babu rao ganpat rao aapte";
   cout<<str_char(5,15,str,'k');
   return 0;
}
int str_char(int index1,int index2,char *c,char se)
{
    int size=0;
    while(c[size])
        size++;
    if(index1<0||index2>size||index1>size||index2<0)
    {
        cout<<"Invalid Index Values !!!";
    }
    else
    {
        
        int i= index1;
        while(c[i]&&i<index2)
        {
            if(c[i]==se)
                return i;
            i++;
        }
        return -1;
    }
}