# include<stdio.h>
void evenn(int);
int main() {
    int n;
    printf("Enter N");
    scanf("%d",&n);
    evenn(n);
    return 0;
}
void evenn(int n)
{
    if(n>0)
    {
        evenn(n-1);
        printf("%d ",2*n);
    }
}