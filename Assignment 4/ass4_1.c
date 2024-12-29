# include<stdio.h>

int main() {
    int a,b;
    printf("enter three digit no");
    scanf("%d",&a);
    b=(a%10);
    a=a/10;
    b=b+a%10;
    a=a/10;
    b=b+a%10;
    a=a/10;
    printf("\n sum is %d ",b);
    return 0;
}