#include<iostream>
using namespace std;
int main()
{
   int arr[10],sum=0;
   for(int i=0;i<10;i++)
   {
    if(i+1==1)
        cout<<"Enter "<<i+1<<"st Element of Array ";
    else if(i+1==2)
        cout<<"Enter "<<i+1<<"nd Element of Array ";
    else if(i+1==3)
        cout<<"Enter "<<i+1<<"rd Element of Array ";
    else
        cout<<"Enter "<<i+1<<"th Element of Array ";
    cin>>arr[i];
    sum+=arr[i];
   }
   cout<<"sum of all elements :- "<<sum;
   
   return 0;
}