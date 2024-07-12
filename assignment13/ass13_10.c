# include<stdio.h>

int main() 
{
    int ch;
    while(1)
    {
        printf("\n------------------------------------------------------------------\n");
        printf("enter 1 for LCM \n");
        printf("enter 2 for SUm of digits\n");
        printf("enter 3 for VOlume of cuboid\n");
        printf("enter 4 for check prime or not\n");
        printf("enter 5 for exit\n");
        printf("\n------------------------------------------------------------------\n");
        scanf("%d",&ch);
        if(ch==5)
        {
            printf("CLOSING the program!!!!");
            break;
        }
        else{
            switch(ch)
            {
               case 1:
               {
                int n,k;
                printf("Enter two number");
                scanf("%d %d",&n,&k);
                int i=2;
                while(i<n*k)
                {
                    if(i%n==0&&i%k==0)
                    {
                        printf("LCM of %d %d is %d",n,k,i);
                        break;
                    }
                    else{
                        i++;
                    }
                }
                
                break;
               }
               case 2:
               {
                int n;
                printf("ENter Number:- ");
                scanf("%d",&n);
                int k=n,sum=0;
                while(k>0)
                {
                    sum=sum+k%10;
                    k=k/10;
                }
                printf("SUM OF DIGITS of %d is %d",n,sum);
                break;
               }
               case 4:{
                int n;
                printf("enter a number ");
                scanf("%d",&n);
                int i=2;
                while(i<=n)
                {
                    if(n%i==0)
                    {
                        printf("%d is prime number",n);
                        break;
                    }
                    else{
                        i++;
                    }
                }
                break;
               }
               case 3:
               {
                int l,b,h;
                printf("enter length , breadth , height of cuboid");
                scanf("%d %d %d",&l,&b,&h);
                printf("VOLUME OF CUBOID IS :- %d",l*b*h);
                break;
               }
               default:
               {
                printf("Invalid INPUT");
               }
            }
        }
    }
    return 0;
}