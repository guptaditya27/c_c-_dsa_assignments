# include<stdio.h>

int main() {
    int a[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter %d value of array ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    
    float averege;
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
        
    }
    averege =sum;
    printf("\n%.2f averege of array,%d ",averege/10,sum);

    return 0;
}