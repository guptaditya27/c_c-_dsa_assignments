# include<stdio.h>
void sort_aesc(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                int k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}
void unique_element(int size,int arr[])
{
   sort_aesc(size,arr);
   int i=0,j=0;
   while(i<size)
   {
    
    while(arr[i]==arr[i+1])
        i++;
    j=i+1;
    if(arr[j]!=arr[j+1]&&j<size)
    {    
        printf("%d ",arr[j]);
        i++;
    }
   }
    
   

}
int main() {
    int size;
    printf("Enter Size Array:- ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value :- ",i+1);
        scanf("%d",&arr[i]);
        
    }
    //sort_desc(size,arr);
    printf("Unique Elemnts are :- ");
    unique_element(size,arr);
    return 0;
}