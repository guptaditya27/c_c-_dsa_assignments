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
int second_largest(int size,int arr[size])
{
    int k1=arr[0];
    int k2=arr[1];
    for(int i=2;i<size;i++)
    {
        if(k2>k1);
        {
            int w=k1;
            k1=k2;
            k2=w;
        }
        if(arr[i]>k2)
        {
            k2=arr[i];
        }
        
    }
    return k2;
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
    printf("\n2nd largest value of array is \"%d\"",second_largest(size,arr));
    
    return 0;
}