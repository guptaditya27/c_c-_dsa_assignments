# include<stdio.h>
void copy(int size,int arr1[size],int arr2[size])
{
    for(int i=0;i<size;i++)
    {
        arr2[i]=arr1[i];
    }
}
int main() {
    int size;
    printf("Enter size of array");
    scanf("%d",&size);
    int arr1[size];
    for(int i=0;i<size;i++){
    
        printf("Enter %d values of 1st array :- ",i+1);
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    copy(size,arr1,arr2);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }
    
    return 0;
}