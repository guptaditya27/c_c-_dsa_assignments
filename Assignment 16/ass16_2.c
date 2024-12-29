# include<stdio.h>
void printn(int);
int main() {
    int n;
    printf("Enter N:- ");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int n){
    
    if(n>0)
    {
        printf("%d ",n);
        printn(n-1);
        
    }
    
}