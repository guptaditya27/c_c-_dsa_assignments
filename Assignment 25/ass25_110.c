# include<stdio.h>
int Highest_marks(int **ptr,int n,int size[])
{
    int max,i,j;
    max=ptr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<size[i];j++)
        {
            if(ptr[i][j]>max)
                max=ptr[i][j];
            
        }
    }
    return max;
}
int main() {
    int* ptr[3];
    int a[5]={25,75,45,12,36};
    int b[6]={11,25,15,65,80,94};
    int c[4]={96,35,45,35};
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    int size[3]={5,6,4};
    printf("%d ",Highest_marks(ptr,3,size));
    return 0;
}