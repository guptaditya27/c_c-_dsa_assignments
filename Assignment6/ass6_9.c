# include<stdio.h>

int main() {
    int a,b,c;
    printf("enter threee sides length of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if (((a+b)>c)&&((b+c)>a)&&((a+c)>b))
    {
        printf("\"%d %d %d\"forms a valid triangle",a,b,c);
    }
    else{
        printf("\"%d %d %d\" Not forms a valid triangle",a,b,c);

    }
    
    return 0;
}
/*
sum of any two sides of a triangle must be greater than the third one*/
