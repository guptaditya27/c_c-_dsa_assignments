#include <stdio.h>

int main() {
    // Write C code here
   int arr[5]={12,13,11,16,15};
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           if(arr[j]>arr[i])
           {
               int k=arr[i];
               arr[i]=arr[j];
               arr[j]=k;
           }
       }
   }
   for(int i=0;i<5;i++)
   {
       printf("%d ",arr[i]);
   }

    return 0;
}