# include<stdio.h>
int hcf(int n,int m)
{
    if(m>n)
    {
        if(m%n==0)
            return n;
        else{
            return hcf(m%n,n);
        }
    }
    else{
        if(n%m==0)
            return m;
        else{
            return hcf(m,n%m);
        }
    }
}
int main() {
    int n,m;
    printf("Enter two Number :- ");
    scanf("%d %d",&n,&m);
    printf("hcf is %d",hcf(n,m));
    return 0;
}