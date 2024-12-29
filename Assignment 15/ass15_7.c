void fibonacci_series(int);
# include<stdio.h>

int main() {
    int terms;
    
    printf("Enter No terms :- ");
    scanf("%d",&terms);
    if(terms<1)
    {
        printf("Invalid Input !!!");
    }
    else{
        fibonacci_series(terms);
    }
    
    
    
    return 0;
}
void fibonacci_series(int n)
{
    
    int t0=-1,t1=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",t0+t1);
        int k=t0+t1;
        t0=t1;
        t1=k;
        
    }
}
