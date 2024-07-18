// frequency of element in array
# include<stdio.h>
int frequency(int a[],int size,int num)
{   int count =0;
    for(int i=0;i<size;i++)
    {
        if(num==a[i])
        {
            count++;
        }
    }
    return count;
}
int main() {
    int size,num;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d value :- ",i+1);
        scanf("%d",&a[i]);

    }
    printf("Enter Number to count:- ");
    scanf("%d",&num);

    printf("%d is repeated %d times in Array",num,frequency(a,size,num));
    return 0;
}