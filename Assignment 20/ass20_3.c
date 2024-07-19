// transpose of matrix
# include<stdio.h>
void transpose_matrix()
{
    int a[3][3];
    printf("Enter 9 Elements of matrix ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main() {
    transpose_matrix();
    return 0;
}