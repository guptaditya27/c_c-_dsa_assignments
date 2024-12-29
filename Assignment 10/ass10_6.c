// all prime no under 100
// prime no div by 1 or itself only
// we just have to divide no by any n and check its divisibilty by that no
# include<stdio.h>

int main() {
    int flag=0;
    for(int i=2;i<=100;i++)
    {
        for(int n=2;n<i;n++)
        {
            if(i%n==0)
            {
                flag=1;
                break;
            } 
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
        else{
            flag=0;
        }
    }
    
    return 0;
}