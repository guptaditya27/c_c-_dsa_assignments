# include<stdio.h>

int main() {
    int n;
    printf("enter no terms to print");
    scanf("%d",&n);
   int i=1;
   while(i<=n)
   {
    printf(" square of %d is:- \"%d\"\n",i,i*i);
    i+=1;
    
   }
    return 0;
}