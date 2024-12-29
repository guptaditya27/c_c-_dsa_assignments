# include<stdio.h>

int main() {
    int num;
    printf("enter a three digit number");
    scanf("%d",&num);
    int a=num%10+1;
    num=num/10;
    int b= num%10+1;
    num=num/10;
    num++;
    num=num*10+b;
    num=num*10+a;
    printf("%d is ryt shifted number",num);


    return 0;
}
/*
# approach is simple 
last is always the remainder when divided by 10
so for ryt shifting we just find remainader and add 1 to it 
till num become single digit then num ++
after that just backtracking the process to create 3 digit no back again
*/