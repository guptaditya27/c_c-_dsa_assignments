# include<stdio.h>
void prime_btw(int,int);

int main() {
    int a,b;
    printf("Enter starting no:- ");
    scanf("%d",&a);
    printf("enter Ending number:- ");
    scanf("%d",&b);
    prime_btw(a,b);
    return 0;
}
void prime_btw(int n,int m)
    {
        int i=n<m?n:m;
        int j=n>m?n:m;
        for(i;i<=j;i++)
        {
            int flag=1;
            for(int k=2;k<i;k++)
                {
                    if(i%k==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    printf("%d ",i);
                }
        }
    }