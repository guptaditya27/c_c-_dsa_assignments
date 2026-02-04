#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
int main()
{
   string s="Aditya";
   string d="Gupta";
   /* 1. append(string &right) */
   s.append(" ji");
   cout<<s<<endl;

   // 2. append(consT char*);
   const char*ptr="raj"; 
   s.append(ptr);
   cout<<s<<endl;

   // 3. append(initializelist<char> )
   s.append({'p','i','n','k'});
    cout<<s<<endl;

    //4. append(int size,'char');
    d.append(5,'k');
    cout<<d<<endl;

    //5. append()
    d.append(ptr,2);
    cout<<d<<endl;
    return 0;
}