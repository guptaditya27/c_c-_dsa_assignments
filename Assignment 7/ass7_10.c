# include<stdio.h>

int main() {
    int n;
    printf("Which Number Table You Would Like To Print:- ");
    scanf("%d",&n);
   int i=1;
   while(i<=10)
   {
    printf(" \" %d x %d == %d\"\n",n,i,n*i);
    i+=1;
    
   }
    return 0;
}