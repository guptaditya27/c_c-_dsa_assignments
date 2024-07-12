# include<stdio.h>
void oddn(int);
int main() {
    int n;
    printf("enter N:- ");
    scanf("%d",&n);
    oddn(n);
    return 0;
}
void oddn(int n)
{
    
    printf("%d ",n);
    if(n>0)
    {
        oddn(n-1);
        printf("%d ",2*n-1);
        
    }
}