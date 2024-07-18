# include<stdio.h>
void swap(int a[],int size,int index1,int index2)
{
    int k=a[index1];
    for(int i=1;i<size;i++)
    {
        if(i==index2)
        {
            a[index1]=a[index2];
            a[index2]=k;
            break;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
int main() {
    int size,index1,index2;

    printf("enter size of array:- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)    
    {   printf("Enter %d value :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter index no to be interchanged ");
    scanf("%d %d",&index1,&index2);
    if(index1>size||index2>size||index1<0||index2<0)
    {
        printf("Invalid index value ");
    }
    else{
        swap(a,size,index1,index2);
    }

    return 0;
}