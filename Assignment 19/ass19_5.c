# include<stdio.h>
//first occurance of adjacent duplicate value
int duplicate(int [],int);

int duplicate(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                return a[i];
                break;
            }
        }
    }
}
int adj_duplicate(int [],int);
int adj_duplicate(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return 0;
}

int main() {
    int size;
    printf("enter size array:- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("first Occured adjacent duplicate value is \"%d\"  ",adj_duplicate(a,size));
    
    //printf("first Occured duplicate value is \"%d\"  ",duplicate(a,size));
    return 0;
}