# include<stdio.h>
void decimal_to_octal(int);
void decimal_to_octal(int n)
{
    if(n>0)
    {
        decimal_to_octal(n/8);
        printf("%d ",n%8);
    }
}
int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
    decimal_to_octal(n);
    return 0;
}