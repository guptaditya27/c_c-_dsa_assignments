# include<stdio.h>
void sort_array_desc(int [],int);
void sort_array_aesc(int [],int);

void sort_array_desc(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    
    for(int w=0;w<size;w++)
    {
        printf("%d ",a[w]);
    }

}

void sort_array_aesc(int a[],int size)
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
    
    for(int w=0;w<size;w++)
    {
        printf("%d ",a[w]);
    }
    
}
int main() {
    int size;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value array :-",i+1);
        scanf("%d",&a[i]);
    }

    sort_array_desc(a,size);
    printf("\n\n");
    sort_array_aesc(a,size);



    return 0;
}