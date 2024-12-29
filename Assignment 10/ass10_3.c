# include<stdio.h>

int main() {
    int n,c,a=-1,b=1,flag=0,count=0;
    printf("enter term want to check:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        if(c==n){
            flag=1;
            count=i;
            break;
        }
        else{

            a=b;
            b=c;
        }
    }
    if (flag==1)
    {
        printf("%d exist in fibonacci series at term no:- %d",n,count+1);
    }
    else{
        printf("%d doesn't exist in fibonacci series",n);
    }
    
    return 0;
}