# include<stdio.h>

int main() {
    int n,a=-1,b=1,c;
    printf("Enter value of n nth term:- ");
    scanf("%d",&n);
    int i=0;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("value of %dth term is %d",n,c);

    return 0;
}