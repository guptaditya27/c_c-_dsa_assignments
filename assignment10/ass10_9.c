// armstrong number
/*
arm strong number woh hote hai jinke every dgit
ko count se exponent and sum krne pe same num mil jyee
eg:; 407 = 4^3+0^3+7^3 
3 used bcoz count digit ==3;
*/

# include<stdio.h>
# include<math.h>
int main() {
    int n;
    int sum=0,p;
    printf("enter number:- ");
    scanf("%d",&n);
    int count=0,k=n;
    while(k)
    {
        k=k/10;
        count++;
    }
    int l=n;
    while(l)
    {
        p=l%10;
        l=l/10;
        sum=sum+pow(p,count);
    }
    if(sum==n)
    {
        printf("%d is Armstrong Number",n);
    }
    else{
        printf("%d is Not an Armstrong Number",n);
    }

    return 0;
}