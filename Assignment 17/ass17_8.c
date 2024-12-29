# include<stdio.h>
void fibonacci(int );
int fibterm(int );
void fibonacci(int n)
{
    if(n==0)
        printf("%d ",n);
    else{
        fibonacci(n-1);
        printf("%d ",fibterm(n));

    }
}
int fibterm(int n)
{
    if(n==0||n==1)
        return n;
    else{
        return fibterm(n-1)+fibterm(n-2);

    }
}
int main() {
    int n;
    printf("Enter no Terms:- ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}