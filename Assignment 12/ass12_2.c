# include<stdio.h>

int main() {
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}