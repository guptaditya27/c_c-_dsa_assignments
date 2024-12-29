
// coprime or not
// hcf of coprime no ==1;
#include <stdio.h>

int main()
{
    int a,b,k;
    
    printf("enter numbers:- ");
    scanf("%d %d",&a,&b);
    int n1=a,n2=b;
    if(b>a)
    {
        while(a)
        {
            k=a;
            a=b%a;
            b=k;
            
        }
        if(b==1)
        {
            printf("%d %d are coprime",n1,n2);
        }
        else{
            printf("%d %d are not coprime",n1,n2);


        }
        printf("\n Hcf is %d",b);
        
    }
    else
    {
        while(b){
            k=b;
            b=a%b;
            a=k;
        }
        if(a==1)
        {
            printf("%d %d are coprime",n1,n2);
        }
        else{
            printf("%d %d are not coprime",n1,n2);


        }
        printf("\n Hcf is %d",a);
        
    }

    return 0;
}