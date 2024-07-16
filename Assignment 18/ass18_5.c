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