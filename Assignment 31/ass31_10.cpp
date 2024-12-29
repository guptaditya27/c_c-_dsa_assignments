#include<iostream>
using namespace std;
int * merge(int*c,int size1,int*d,int size2)
{
    
   int i,j,k;
   int *N=(int*)malloc(size1*2-1);
   for(i=0,j=0,k=0;i<size1&&j<size2;k++)
   {
        if(c[i]<d[j])
        {
            N[k]=c[i];
            i++;
        }
        else{
            N[k]=d[j];
            j++;
        }
   }
   while(i<size1)
   {
    N[k]=c[i];
    i++;
    k++;
   }
   while(j<size2)
   {
    N[k]=d[j];
    j++;
    k++;
   }

   
   
   return N;
}
int main()
{
   int a[5]={0,10,15,16,20};
   int b[5]={5,7,9,14,18};
   int *z=merge(a,5,b,5);
   for(int i=0;i<10;i++)
    cout<<z[i]<<" ";


   return 0;
}