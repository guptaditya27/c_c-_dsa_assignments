# include<stdio.h>

int main() {
    int n,flag=0;
    printf("enter number:- ");
    scanf("%d",&n);
    int i=2;
    while(i>=2&&i<n||n==1)
    {
        if (n%i==0)
        {
          flag=1;
          break;  
        }
        i++;
        
    }
    if (flag==1)
    {
        printf("%d is not a Prime Number",n);
    }
    else{
        printf("%d is a Prime Number",n);
        
    }
    
    return 0;
}