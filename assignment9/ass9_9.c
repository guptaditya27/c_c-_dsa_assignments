// Online C compiler to run C program online
//lcm of two number
# include<stdio.h>

int main() {
    int n,k;
    int i=2;
    printf("enter two number:- ");
    scanf("%d %d",&n,&k);
    while(i<=n*k)
    {
        if(i%n==0&&i%n==0)
        {
            printf("%d is Lcm of %d %d",i,n,k);
            break;
        }
        else{
            i++;
        }
        
        
    }
    return 0;
}