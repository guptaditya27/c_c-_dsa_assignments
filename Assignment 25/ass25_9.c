# include<stdio.h>
int mid(int *ptr,int size)
{
    int left=0;
    int right=size-1;
    int loc=0;
    
    while(left<right)
    {
        int k;
        while(left<right&&ptr[loc]<=ptr[right])
            right--;
        if(right==left)
            break;
        k=ptr[loc];
        ptr[loc]=ptr[right];
        ptr[right]=k;
        loc=right;
        while (left<right&&ptr[loc]>ptr[left])
            left++;
        if(left==right)
            break;
        k=ptr[loc];
        ptr[loc]=ptr[left];
        ptr[left]=k;
        loc=left;

        
        
    }
    return loc;
}
int main() {
    int arr[6]={14,16,10,15,12,13};
    printf("i = %d\n",mid(arr,6));

    for(int i=0;i<6;i++)
        printf("%d ",arr[i]);
    return 0;
}