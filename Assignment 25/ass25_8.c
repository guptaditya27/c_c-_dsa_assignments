# include<stdio.h>

void merge(int *arr1,int size1,int*arr2,int size2,int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        k++;i++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
int main() {
    int arr1[5]={10,11,15,16,18};
    int arr2[5]={12,14,19,21,25};
    int arr3[10];
    merge(arr1,5,arr2,5,arr3);
    for(int i=0;i<10;i++)
        printf("%d ",arr3[i]);
    

    return 0;
}