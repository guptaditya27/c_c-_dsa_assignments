// Online C compiler to run C program online
#include <stdio.h>
void rotate(int size,int arr[size],int n,int d)
{
    if(d==1)
    {
        while(n>0)
        {
            int k=arr[size-1];
            for(int i=size-1;i>0;i--)
            {    
                arr[i]=arr[i-1];
            }
            arr[0]=k;
            n--;
        }
    }
    
    else if(d==-1)
    {
        while(n>0)
        {
            int k=arr[0];
            for(int i=0;i<size;i++)
            {
                if(i==size-1)
                    arr[size-1]=k;
                else{
                    arr[i]=arr[i+1];
                }
            }
            n--;
        }
    }
    else{
        printf("Invalid input parameters!!\n");
    }
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int main() {
    // Write C code here
    int size,d,n;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value of array :- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter Number termms to Rotate :- ");
    scanf("%d",&n);
    printf("Enter firection of rotation::\n1-------- for right shift\n-1 ------ for Left shift  ");
    scanf("%d",&d);
    rotate(size,arr,n,d);

    return 0;
}