# include<stdio.h>

int main() {
    int a;
    printf("enter number ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\'%d\' is even",a);

    }
    else if (a%3==0)
    {
        printf("\"%d\" is odd",a);
    }
    else{
        printf("\"%d\" is  not  a expected input",a);

    }

    return 0;
}