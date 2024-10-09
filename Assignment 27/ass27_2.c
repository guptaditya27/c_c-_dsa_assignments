# include<stdio.h>
# include<string.h>
# include<stdlib.h>
float input(int num)
{
    int *ptr,sum=0;;
    ptr=(int*)calloc(num,4);
    printf("Enter Values :- ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    return sum/num;
    
}
int main() {
    
    int  num;
    printf("Enter no data values:- ");
    scanf("%d",&num);
    printf("%.2f",input(num));
    

    return 0;
}