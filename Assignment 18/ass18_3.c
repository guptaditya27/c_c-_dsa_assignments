# include<stdio.h>

int main() {
    int a[10];
    int i=0;
    int sumeve,sumodd=0;
    while(i<10)
    {
        printf("enter %d no array:- ",i+1);
        scanf("%d",&a[i]);
        i++;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            sumeve=sumeve+a[i];
        }
        else if(a[i]%2!=0)
        {
            sumodd=sumodd+a[i];
        }
        
    }
    printf("%d %d",sumeve,sumodd);
    return 0;
}