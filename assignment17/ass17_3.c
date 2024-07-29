# include<stdio.h>
int even_num_sum(int);
int even_num_sum(int terms)
{
    if(terms>0)
    {
        return (2*terms)+even_num_sum(terms-1);
    }
}
int main() {
    int n;
    printf("enter Number terms:- ");
    scanf("%d",&n);
    printf("%d",even_num_sum(n));
    return 0;
}