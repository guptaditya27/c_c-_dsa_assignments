# include<stdio.h>

int main() {
    int a=-1,b=1,c;
    int n;
    printf("Enter no of terms to generate :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}