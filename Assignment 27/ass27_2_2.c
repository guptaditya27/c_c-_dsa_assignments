# include<stdio.h>
#include<stdlib.h>
int*input()
{
    int n;
    printf("Enter No values to Enter :-");
    scanf("%d",&n);
    int *p=malloc(n*4);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d value ",i+1);
        scanf("%d",&p[i]);
    }
    return p;
}
float averege(int *ptr,int n)
{
    
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ptr[i];
    }
    return sum/n;
}
int main() {
    int*ptr=input();
    printf(" Averege is %.2f ",averege(ptr,5));

    return 0;
}