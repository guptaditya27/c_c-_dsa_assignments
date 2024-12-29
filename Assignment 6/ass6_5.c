# include<stdio.h>

int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
     if (n%3==0&&n%2==0)
     {
        printf("\"%d\" is Divisible by both \"2\" and \"3\"",n);
     }
     else{
        printf("\"%d\"Not Divisible by BOtH \"3 and\"5\"",n);
     }
     
    return 0;
}