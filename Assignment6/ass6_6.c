# include<stdio.h>

int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
     if (n%7==0||n%3==0)
     {
        printf("\"%d\" is Divisible by \"3\" or \"7\"",n);
     }
     else{
        printf("\"%d\"Not Divisible by BOtH \"3 and\"7\"",n);
     }
     
    return 0;
}