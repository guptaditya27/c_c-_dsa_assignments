# include<stdio.h>

int main() {
    int n=5;// no of terms
    int k=1;
    for(int i=1;k<=n;i++)
    {   int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            else{
                flag=1;
            }

        }
        if(flag==1)
        {   
            printf("%d ",i);
            flag=0;
            k++;
        }
    }
    return 0;
}