# include<stdio.h>
int sum_digit(int);
int sum_digit(int n)
{
    if(n>0)
    {
        return n%10+sum_digit(n/10);
    }
}
int main() {
    int n;
    printf("Enter Number :- ");
    scanf("%d",&n);
    printf("%d ",sum_digit(n));
    return 0;
}