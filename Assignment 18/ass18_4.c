# include<stdio.h>

int main() {
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter %d number :- ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\n greatest value is %d",max);
    return 0;
}