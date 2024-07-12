# include<stdio.h>
int factorial(int);
int permutation(int ,int);
int main() {
    int n,r;
    printf("ENTER TOTAL TERMS:- ");
    scanf("%d",&n);
    printf("ENTER ARRANGEMENT TERMS:- ");
    scanf("%d",&r);
    printf("\n PERMUTATION of %d from %d is \"%d\"",r,n,permutation(n,r));
    return 0;
}
int factorial(int x)
{
    if(x==0||x==1)
    {
        return 1;
    }
    else{
        int k=x;
        int fact=1;
        while(k>1)
        {
            fact=fact*k;
            k--;
        }
        return fact;
    }
}
int permutation(int x,int y){

    return factorial(x)/factorial(x-y);
}