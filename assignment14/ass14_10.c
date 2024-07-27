// Online C compiler to run C program online
/*#include <stdio.h>

int main() {
    // Write C code here
    int num=13;
    int k=num;
    for(int i=2;i<k;i++)
    {
        int w=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
               w=0; 
            }
        }
        if(w==1)
        {
            while(num%i==0)
            {
                printf("%d ",i);
                num=num/i;
            }
        }
    }

    return 0;
}
problem is :- 
not running for number whose prime factor is
they themselves eg:-  13 
*/

/*MY SIRG APPROACH */
# include<stdio.h>
void prime_factor(int );
void prime_factor(int num)
{
    int i=2;
    while(num>1)
    {
        
        while(num%i==0)
        {
            printf("%d ",i);
            num/=i;
        }
        i++;
    }
}

int main() {
    prime_factor(47);
    return 0;
}