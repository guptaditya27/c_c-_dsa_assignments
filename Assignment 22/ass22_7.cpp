#include<iostream>
using namespace std;
int char_occurence(char*,char);
int main()
{
   char str[]="Aditya";
   cout<<char_occurence(str,'k');
   return 0;
}
int char_occurence(char*c,char k)
{
    int i=0;
    while(c[i])
    {
        if(c[i]==k)
            return i;
        i++;
    }
    return -1;
}