# include<stdio.h>

int main() {
    for(int i=1;i<=5;i++)
    {
        for(int j=1,k=i;j<=i;j++,k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}