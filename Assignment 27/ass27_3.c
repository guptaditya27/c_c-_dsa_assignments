# include<stdio.h>
# include<string.h>
# include<stdlib.h>
int Sum(int n)
{
    int sum=0;
    int*p;
    
    printf("Enter Value:- ");
    for(int i=1;i<=n;i++)
    {    
        
        p=(int*)malloc(4);
        scanf("%d",p);
        sum+=(*p);
        free(p);
    }
    return sum;
}
int main() {
    
    int n;
    printf("Enter n No of Values:- ");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}