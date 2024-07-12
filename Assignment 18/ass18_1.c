# include<stdio.h>

int main() {
    int a[10];
    int i=0;
    while(i<10)
    {
        printf("Enter %d value of array :- ",i);
        scanf("%d",&a[i]);
        i++;
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {    
        sum=sum+a[i];

    }
    printf("\n%d",sum);
    return 0;
}