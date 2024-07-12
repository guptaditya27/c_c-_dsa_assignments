# include<stdio.h>

int main() {
    int a,b,c;
    printf("input three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("\"%d\" is greatest of all",a);
    }
    else if (b>a&&b>c)
    {
        printf("\"%d\" is greatest of all",b);
        
    }
    else if (c>a&&c>b)
    {
        printf("\"%d\" is greatest of all",c);
        
    }
    else{
        printf("\"%d\" is same of all",a);
        
    }
    
    return 0;
}