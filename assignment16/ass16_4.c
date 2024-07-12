# include<stdio.h>
void oddnrev(int);
int main() {
    int n;
    printf("enter value N:- ");
    scanf("%d",&n);
    oddnrev(n);
    return 0;
}
void oddnrev(int n)
{   
    if(n>0)
    {
        printf("%d ",2*n-1);
        oddnrev(n-1);
    }
}
