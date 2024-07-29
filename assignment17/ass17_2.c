# include<stdio.h>
int odd_num_sum(int);
int odd_num_sum(int terms)
{
    if(terms>0)
    {
        return (2*terms-1)+odd_num_sum(terms-1);
    }
}
int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
    printf("%d",odd_num_sum(n));
    return 0;
}