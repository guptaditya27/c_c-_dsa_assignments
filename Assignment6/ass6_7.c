# include<stdio.h>

int main() {
    int n;
    printf("enter Number:- ");
    scanf("%d",&n);
     if (n>0)
     {
        printf("\"%d\" is  Positive",n);
     }
     else if (n<0)
     {
        printf("\"%d\" is  Negative",n);
        
     }
     
     else{
        printf("\"%d\"is Zero",n);
     }
     
    return 0;
}