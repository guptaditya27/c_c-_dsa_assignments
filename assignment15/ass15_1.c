# include<stdio.h>
int lcm(int,int);
int main() {
    int a,b;
    printf("enter Two NUMBER for LCM");
    scanf("%d %d",&a,&b);
    printf("LCM of %d %d is %d",a,b,lcm(a,b));
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