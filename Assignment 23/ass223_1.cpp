#include<iostream>
using namespace std;
void ispalindrome(char *);
int main()
{
   char str[10]="level";
   ispalindrome(str);
   return 0;
}
void ispalindrome(char *c)
{
    int size=0;
    int i,j,count;
    while(c[size])
        size++; 
    char rev_str[size];
    for(i=0,j=size;c[i];i++,j--)
    {
        c[j]=rev_str[i];
    }
    while(c[count]==rev_str[count])
        count++;
    if(count==size)
        cout<<endl<<"True";
    else{
        cout<<endl<<"False";
    }
    
}