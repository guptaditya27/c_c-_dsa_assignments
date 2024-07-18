# include<stdio.h>
int count_duplicate(int a[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;i<size;i++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int size;
    printf("Enter size of Array :- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("enter %d value :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("total duplicate vaues are :- %d",count_duplicate(a,size));
    return 0;
}