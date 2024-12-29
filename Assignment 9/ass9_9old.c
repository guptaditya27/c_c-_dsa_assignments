# include<stdio.h>

int main() {
    int a,b,l=1,i=2,flag=0;
    printf("enter two number:- ");
    scanf("%d %d",&a,&b);
    while(a>1||b>1)
    {
        if(a%i==0){
            a=a/i;
            flag=1;

        }
        if(b%i==0)
        {
            b=b/i;
            flag=1;
        }
        if(flag==1)
        {
            l=l*i;
            flag=0;
        }
        else{
            i++;
        }
    }
    printf("%d is lcm of %d %d",l,a,b);

    return 0;
}