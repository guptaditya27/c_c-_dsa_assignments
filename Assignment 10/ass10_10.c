# include<stdio.h>
# include<math.h>

int main() {
    
    for(int i=1;i<=1000;i++)
    {
        int n=i;
        int sum=0,count=0;
        while(n)
        {
            n=n/10;
            count++;
        }
        int k=i;
        while(k)
        {
            int p=k%10;
            sum=sum+pow(p,count);
            k=k/10;
            
        }
        if (i==sum)
        {
            printf("%d ",i);
        }
        else{
            count=0;
        }
    }
    return 0;
}   