#include <stdio.h>
int greatest_array(int a[],int);
int greatest_array( int a[],int size)
{
  int max;
  max=a[0];
  for(int i=0;i<size;i++)
  {
    if(max<a[i])
    {
        max=a[i];
    }
  }
  return max;
}
int main() {
    int size;
    printf("enter size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&arr[i]);
    }
    int a=greatest_array(arr,size);
    printf("greatest number is %d",a);
    

    return 0;
}