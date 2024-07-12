// fibonacci series
/*  next no is sum of pervious 2 no 
0 1 1 2 3 5 8 13  .......*/
# include<stdio.h>

int main() {
    int n,t1=0;
    int t2=1,k=0;
    printf("enter term value:- ");
    scanf("%d",&n);
    if (n==1)
    {
        printf("value of term %d th is %d",n,t1);
    }
    else if(n==2)
    {
        printf("value of term %d th is %d",n,t2);

    }
    else{
        int i=3;
        
        int temp_var1=t1+t2;
        int prev=0;
        while(i<=n)
        {
            int temp_var2=temp_var1+prev;
            prev=temp_var1;
            temp_var1=temp_var2;
            k=temp_var2;

            i++;
        }
        printf("%d term is %d",n,k);

    }
    return 0;
}