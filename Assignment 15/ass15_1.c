# include<stdio.h>
int lcm(int,int);
int LCM(int,int);

int main() {
    int a,b;
    printf("enter Two NUMBER for LCM:- ");
    scanf("%d %d",&a,&b);
    printf("LCM of %d %d is %d",a,b,LCM(a,b));
    return 0;
}
int lcm(int x,int y){
    //least common multiple
    int i=2;
    while(i<=x*y)
    {
        if(i%x==0&&i%y==0)
        {
            return i;
            break;
        }
        else{
            i++;
        }
    }
}

int LCM(int n,int m)
{
    for(int i=n<m?n:m;i<=n*m;i++)
    {
        if(i%n==0&&i%m==0)
        {
            return i;
        }
    }
}