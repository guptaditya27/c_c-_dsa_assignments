# include<stdio.h>

int main() {
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter %d number :- ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\n smallest value is %d",min);
    return 0;
}
/*
// Online C compiler to run C program online
#include <stdio.h>
int greatest_array(int size,int arr[size])
{
    int k=arr[0];
    for(int i=1;i<size;i++)
    {
        if(k<arr[i])
            k=arr[i];
    }
    return k;
}
int smallest_array(int size,int arr[size])
{
    int k=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<k)
            k=arr[i];
        
    }
    return k;
}
int main() {
    // Write C code here
    int size;
    printf("enter size of array :- ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value of Array :- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nGreatest value of array is \"%d\"",greatest_array(size,arr));
    printf("\nsmallest value of array is \"%d\"",smallest_array(size,arr));
    return 0;
}*/
