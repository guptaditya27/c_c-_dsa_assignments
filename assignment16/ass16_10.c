# include<stdio.h>
void reverse_num(int);
void reverse_num(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse_num(n/10);
    }
}
int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
    reverse_num(n);
    return 0;
}