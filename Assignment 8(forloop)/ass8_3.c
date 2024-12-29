# include<stdio.h>

int main() {
    int n;
    printf("enter no of terms:- ");
    scanf("%d",&n);
    for(int i=n;n>0;n--)
    {
        printf("\"%d\"\n",n);
    }
    return 0;
}