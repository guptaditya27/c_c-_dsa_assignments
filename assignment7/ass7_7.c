# include<stdio.h>

int main() {
    int n;
    printf("enter no terms to print");
    scanf("%d",&n);
   int i=n*2;
   while(i>=2)
   {
    printf("\"%d\"\n",i);
    i-=2;
    
   }
    return 0;
}