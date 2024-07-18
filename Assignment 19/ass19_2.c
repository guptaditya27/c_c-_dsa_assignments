# include<stdio.h>
int smallest_array(int a[],int);
int smallest_array(int a[],int size)
{
    int min=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main() {
    int size;
    printf("Enter Size of Array:- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d term",i+1);
        scanf("%d",&a[i]);
    }
    printf("Smallest no array is %d ",smallest_array(a,size));
    
    return 0;
}