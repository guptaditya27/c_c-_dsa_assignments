#include<iostream>
using namespace std;
void prime_or_not(int);
int main()
{
   int num;
   cout<<"ENter Number :- ";
   cin>>num;
   prime_or_not(num);
   return 0;
}
void prime_or_not(int num)
{
    int counter =0;

    for(int i=2;i<num;i++)
    {
        
        if(num%i==0)
        {
           counter =1;
           break; 
        }

    }
    if(counter==1)
    {
        cout<<num<<" Is not prime";
    }
    else{
        cout<<num<<" Is prime";

    }
}