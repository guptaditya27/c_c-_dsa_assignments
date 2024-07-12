# include<stdio.h>
void noprime(int,int);

int main() {
    int a,b;
    printf("Enter starting no:- ");
    scanf("%d",&a);
    printf("enter Ending number:- ");
    scanf("%d",&b);
    noprime(a,b);
    return 0;
}
void noprime(int x,int y)
{
    
    for(int k=x;k<=y;k++)
    {   int flag=0;
        for(int i=2;i<(x>y)?x:y;i++)
        {
         if(k%i==0)
         {
            flag=1;
            break;
         }   
        }
        if(flag==0)
        {
            printf("%d ",k);
        }
        else{
            flag=0;
        }

    }
}