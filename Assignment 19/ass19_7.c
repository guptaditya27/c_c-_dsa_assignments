# include<stdio.h>
void sort_aesc(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[i]<a[j])
            {
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    
}
int count_duplicate(int a[],int size)
{
    sort_aesc(a,size);
        int count=0,i=0,j=1;
        
        while(i<size)
        {
            if(a[i]==a[j])
                count++;
            while(a[i]==a[j])
                j++;
            i=j;
            j=i+1;
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