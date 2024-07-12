#include <stdio.h>

int main()
{
    int a,b,k;
    int n1=a,n2=b;
    printf("enter numbers:- ");
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        while(a)
        {
            k=a;
            a=b%a;
            b=k;
            
        }
        
        printf(" Hcf is %d",b);
        
    }
    else
    {
        while(b){
            k=b;
            b=a%b;
            a=k;
        }
        printf(" Hcf is %d",a);
        
    }

    return 0;
}