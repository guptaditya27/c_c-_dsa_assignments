// sum firdt n natural no
// fn may be of TSRS Nature
# include<stdio.h>
int sum_natural(int n)
{
    if(n>0)
    {
        return n+sum_natural(n-1);
    }
}
int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
    printf("%d",sum_natural(n));
    return 0;
}