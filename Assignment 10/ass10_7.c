// all prime no b/n two no
# include<stdio.h>

int main() {
    int lw,up;
    int  flag=0;
    printf("enter two numbers:- ");
    scanf("%d %d",&lw,&up);
    for(int i=lw;i<=up;i++)
    {
        for(int k=2;k<i;k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            flag=0;
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}