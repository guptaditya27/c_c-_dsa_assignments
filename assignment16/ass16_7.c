# include<stdio.h>
void square_natural_no(int);
int main() {
    int n;
    printf("Enter no of terms:- ");
    scanf("%d",&n);
    square_natural_no(n);

    return 0;
}
void square_natural_no(int n)
{
    if(n>0)
    {
        square_natural_no(n-1);
        printf("%d ",n*n);
    }
}