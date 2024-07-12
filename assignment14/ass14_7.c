# include<stdio.h>

int factorial(int);
int combination(int ,int);
int main() {
    int n,r;
    printf("ENTER TOTAL TERMS:- ");
    scanf("%d",&n);
    printf("ENTER SELECTED TERMS:- ");
    scanf("%d",&r);
    printf("\n total combination of %d from %d is \"%d\"",r,n,combination(n,r));
    return 0;
}


int factorial(int x)
{
    int i=x;
    int k=x,fact=1;
    if(x==0||x==1)
    {
        return 1;
    }
    else{
        while(k>1)
        {
            fact=fact*k;
            k--;
        }
        return fact;
    }
}
int combination(int x,int y)
{
    return factorial(x)/(factorial(y)*factorial(x-y));
}