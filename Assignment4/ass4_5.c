# include<stdio.h>

int main() {
    int x,y;
    printf("enter original number");
    scanf("%d",&x);
    printf("enter no to append");
    scanf("%d",&y);
    x=x*10;
    x=x+y;
    printf("%d",x);
    return 0;
}