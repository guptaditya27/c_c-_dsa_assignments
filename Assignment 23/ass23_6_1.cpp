// frequency of each character
#include<iostream>
using namespace std;
void frequency_char(char*);
int main()
{
   char str1[]="aditya";
   frequency_char(str1);
   return 0;
}
void frequency_char(char*c)
{
    int i=0;
    while(c[i])
    {
        char k=c[i];
        int frquency=1;
        int j=i+1;
        while(c[j])
        {
            if(c[j]==k)
                frquency++;
            j++;
        }
        cout<<endl<<"Frequency of:- "<<c[i]<<" is "<<frquency<<endl;
        
        i++;
    }
}