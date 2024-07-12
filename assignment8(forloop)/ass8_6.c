# include<stdio.h>

int main() {
    int n;
    printf("enter number terms:- ");
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}