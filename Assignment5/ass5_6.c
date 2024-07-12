// check whetether given no 3 digit or not
# include<stdio.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a= n;
    int div =0;
    while(a>0){
        a=a/10;
        div++;
    }
    if (div ==3){
        printf("\"%d\" is a 3 digit number",n);
    }
    else{
        printf("\"%d\" is not a 3 digit number",n);
    }

    return 0;
}