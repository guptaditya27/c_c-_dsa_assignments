# include<stdio.h>
void evenrev(int);
int main() {
    int n;
    printf("Enter no terms :- ");
    scanf("%d",&n);
    evenrev(n);
    return 0;
}
void evenrev(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        evenrev(n-1);
    }
}