# include<stdio.h>
void natural_no(int);
int main() {
    int n;
    printf("ENter N natural no:- ");
    scanf("%d",&n);
    natural_no(n);
    return 0;
}
void natural_no(int x)
{
    while(x>0)
    {
        printf("%d ",x);
        x--;
    }
}