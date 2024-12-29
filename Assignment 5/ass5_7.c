# include<stdio.h>

int main() {
    int a,b;
    printf("enter two numbers:-");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("\"%d\" is greater than \"%d",a,b);
    }
    else if (b>a)
    {
        printf("\"%d\" is greater than \"%d\"",b,a);
    }
    else{
        printf("%d duplicate values entered",a);
    }
    
    return 0;
}