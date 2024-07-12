//hcf of two number
# include<stdio.h>

int main() {
    int a,b,k;
    printf("enter two number:- ");
    scanf("%d %d",&a,&b);
    for (int h=a<b?a:b;h>1; h--)
    {
        if(a%h==0&&b%h==0)
        {   k=h;
            break;
        }
        
    }
    printf("%d is hcf",k);
    

    return 0;
}