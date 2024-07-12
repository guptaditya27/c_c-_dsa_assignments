# include<stdio.h>

int main() {
    int n;
    int flag=0;
    printf("enter number:- ");
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        for(int k=2;k<i;k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
            break;
        }
        else{
            flag=0;
        }
    }
    return 0;
}