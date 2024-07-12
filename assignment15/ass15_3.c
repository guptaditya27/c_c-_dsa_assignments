# include<stdio.h>
int prime_not(int);
int main() {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(prime_not(a)==1)
    {
        printf("%d is prime Number",a);    
    }
    else if (prime_not(a)==0)
    {
        printf("%d is Not Prime",a);
    }
    else{
        printf("Invalid Input");
    }
    
    return 0;
}
int prime_not(int x)
{
    int i=2,k=1;
    while(i<x)
    {
        if(x%i==0)
        {
            
            k=0;
            break;
        }
        else{
            i++;
        }
    }
    return k;
}