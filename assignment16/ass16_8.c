# include<stdio.h>
void deci_to_binary(int);
int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
    deci_to_binary(n);
    return 0;
}
void deci_to_binary(int n)
{
    if(n>0)
    {
        deci_to_binary((int)n/2);
        if(n%2==0)
        {
            printf("%d ",0);
        }
        else{
            printf("%d ",1);
        }
    }
}