# include<stdio.h>
int odd_eve(int);

int main() {
    int x;
    printf("ENTER NUMBER:-");
    scanf("%d",&x);
    if(odd_eve(x)==1)
    {
        printf("%d is even no",x);
    }
    else if(odd_eve(x)==0)
    {
        printf("%d is odd no",x);
    }
    else{
        printf("INVALID CHOICE !!!");
    }
    return 0;
}
int odd_eve(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}