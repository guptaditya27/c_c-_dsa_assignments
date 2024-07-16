#include <stdio.h>

int main() {
    int a[5]={12,546,2,789,35};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int n=a[i];
                a[i]=a[j];
                a[j]=n;
                
            }
        }
    }
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);

    return 0;
}