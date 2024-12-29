#include<iostream>
using namespace std;

void swap(int*a,int*b,int size)
{
    int i=0;
    while(i<size)
    {
        int k=a[i];
        a[i]=b[i];
        b[i]=k;
        i++;
    }
    
}
int main()
{
   int a[5]={10,15,12,16,9};
   int b[5]={11,14,18,47,49};
   swap(a,b,5);
   for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
   return 0;
}