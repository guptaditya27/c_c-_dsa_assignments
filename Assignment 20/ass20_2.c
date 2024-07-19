// product of two matrices
# include<stdio.h>
void matrix_mul()
{
    int a[3][3],b[3][3],i,j,sum,k,c[3][3];
    printf("enter 9 Number of First Matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nenter 9 Number of Second Matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0,sum=0;k<=2;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

}
int main()
{
    matrix_mul();
    return 0;
}
