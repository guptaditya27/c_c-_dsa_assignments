#include<iostream>
using namespace std;
//sort array.
void sort(int[],int,bool=true);
int main()
{
   int a[]={15,20,10,13,25};
   int size=5;
   sort(a,size);
   for(int i=0;i<size;i++)
   {
        cout<<a[i]<<" ";
   }
   return 0;
}
void sort(int a[],int size,bool asc)
{
    int i,r,temp;
    //int size=sizeof(a);
    //bubble sort
    if(asc)
    {
        for(r=0;r<size-1;r++)
        {
            for(i=0;i<size-r-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;

                }
            }
        }
    }
    else{
        for(r=0;r<size-1;r++)
        {
            for(i=0;i<size-r-1;i++)
            {
                if(a[i]<a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;

                }
            }
        }
    }
    
}