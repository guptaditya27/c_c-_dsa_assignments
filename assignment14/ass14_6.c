# include<stdio.h>
int factorial(int);
int main() {
    int n;
    printf("Enter number for factorial:- ");
    scanf("%d",&n);
    printf("factorial of %d is \"%d\"",n,factorial(n));
    return 0;

}
int factorial(int x)
{   if(x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x=x*factorial(x-1);
    }    
}   