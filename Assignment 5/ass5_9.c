# include<stdio.h>

int main() {
    int year;
    printf("enter year to check:-");
    scanf("%d",&year);
    if ((year%4==0&& year%100!=0)||year%400==00)
    {
        printf("year \"%d\" is a Leap year",year);
    }
    else{
        printf("year \"%d\" is not a Leap year",year);
    }
    return 0;
}