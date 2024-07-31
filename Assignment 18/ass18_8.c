# include<stdio.h>
int smallest(int size,int arr[size])
{
    int smallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;
}
int second_smallest(int size,int arr[size])
{
    int smallest =arr[0];
    int second_smallest=arr[1];
    for(int i=2;i<size;i++)
    {
        if(smallest>second_smallest)
        {
            int k=smallest;
            smallest=second_smallest;
            second_smallest=k;
        }
        if(arr[i]<second_smallest)
        {
            int k=second_smallest;
            second_smallest=arr[i];
            arr[i]=k;
        }
    }
    return second_smallest;
}
int main() {
    int size;
    printf("Enter size of Array:- ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element of array :- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d is smallest",smallest(size,arr));
    printf("\n%d is second smallest",second_smallest(size,arr));

    return 0;
}