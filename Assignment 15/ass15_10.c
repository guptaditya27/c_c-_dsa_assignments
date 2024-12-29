# include<stdio.h>
int pattern(int);
int fact(int);
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        int pdt=1;
        for(int i=n;i>1;i--)
        {
            pdt=pdt*i;
        }
        return pdt;
    }
}
int pattern(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}



int main() {
    int n;
    printf("1!/1 + 2!/2 + 3!/3 .......");
    printf("\nEnter no terms for sum :- ");
    scanf("%d",&n);
    printf("%d",pattern(n));
    return 0;
}