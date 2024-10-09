// count words in string
#include<iostream>
using namespace std;
int count_words(char*);
int main()
{
   char str[10]="AsdfghSj";
   cout<<count_words(str);
   return 0;
}
int count_words(char*c)
{
    int i=0,count=0;
    while(c[i])
    {
        if((int)c[i]>=65 &&(int)c[i]<=90||(int)c[i]>=97&&(int)c[i]<=122)
            count++;
        i++;
    }
    return count;
}