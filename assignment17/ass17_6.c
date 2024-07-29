# include<stdio.h>
int factorial(int);
int factorial(int n)
{   
    if(n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
int main() {
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}