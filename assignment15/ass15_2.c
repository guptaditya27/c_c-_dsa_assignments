# include<stdio.h>
int hcf(int,int);
int HCF(int ,int);
int main() {
    int a,b;
    printf("enter Two NUMBER for HCF");
    scanf("%d %d",&a,&b);
    printf("HCF of %d %d is %d",a,b,HCF(a,b));
    return 0;
}
int hcf(int x,int y){
    //highest common factor
    int k;
    for (int h=x<y?x:y;h>1; h--)
    {
        if(x%h==0&&y%h==0)
        {   k=h;
            break;
        }
        return k;
    }
    
}

int HCF(int n,int m)
{
    int k=n<m?n:m;
    while(1)
    {
        if(n%k==0&m%k==0)
        {
            return k;
        }
        else{
            k--;
        }
    }
}