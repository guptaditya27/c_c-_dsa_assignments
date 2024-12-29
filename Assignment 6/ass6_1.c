# include<stdio.h>

int main() {
    int number;
    printf("Enter a Number");
    scanf("%d",&number);
    if(number>99&&number<1000)
    {
        printf("\"%d\" is a Three digit number",number);
    }
    else{
        printf("\"%d\" is Not Three digit number",number);

    }
    return 0;
}