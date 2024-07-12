# include<stdio.h>
int digit_search(int,int);
int main() {
    int n,s;
    printf("enter Number :- ");
    scanf("%d",&n);
    printf("enter Digit want to search:- ");
    scanf("%d",&s);
    if(digit_search(n,s)==1)
    {
        printf("%d is present in %d",s,n);
    }
    else{
        printf("%d NOT present in %d",s,n);

    }
    return 0;
}
int digit_search(int x,int y)
{
    int flag=0;
    int k=x;
    while(k>0)
    {
        if(y==k%10)
        {
            flag=1;
            break;
        }
        else{
            k=k/10;
        }
    }
    return flag;
}