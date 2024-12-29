# include<stdio.h>
int count(int n);
int count(int n)
{
    if(n>0)
    {   int i=1;
        return i+count(n/10);
    }
}

int main() 
{
    printf("%d ",count(1234));
    return 0;
}