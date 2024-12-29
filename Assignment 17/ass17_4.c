# include<stdio.h>
int square_num_sum(int);
int square_num_sum(int terms)
{
    if(terms>0)
    {
        return (terms*terms)+square_num_sum(terms-1);
    }
}
int main() {
    int n;
    printf("enter Number terms:- ");
    scanf("%d",&n);
    printf("%d",square_num_sum(n));
    return 0;
}