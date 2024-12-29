# include<stdio.h>
void odd_no(int);
int main() {
    int n;
    printf("Enter n of odd no:- ");
    scanf("%d",&n);
    odd_no(n);
    return 0;
}
void odd_no(int x)
{   int n=1;
    while(n<=2*x-1)
    {
        printf("%d ",n);
        n+=2;
    }
}