// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int count(int);
int count(int n)
{
    int count =0;
    while(n)
    {
        n/=10;
        count++;
    }
    return count;
}
void Armstrong_num(int n,int m)
{
    int i=n<m?n:m;
    int j=n>m?n:m;
    for(i;i<=j;i++)
    {
        int sum=0;
        int w=i;
        int y=count(i);
        while(w)
        {
            
            
            int k=w%10;
            w=w/10;
            sum=sum+pow(k,y);
            
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
int main() {
    // Write C code here
    Armstrong_num(1,370);

    return 0;
}