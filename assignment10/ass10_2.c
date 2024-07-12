# include<stdio.h>

int main() {
    int n,t1=0,t2=1;
    printf("enter no of terms:- ");
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d ",t1);
    }
    else if(n==2)
    {
        printf("%d ",t1);
        
        printf("%d ",t2);
    }
    else{
        printf("%d ",t1);
        printf("%d ",t2);

        int i=3;
        
        int temp_var1=t1+t2;
        int prev=0;
        while(i<=n)
        {   
            int temp_var2=temp_var1+prev;
            printf("%d ",temp_var2);
            prev=temp_var1;
            temp_var1=temp_var2;
            //k=temp_var2;

            i++;
        }
    

    }
    

    return 0;
}