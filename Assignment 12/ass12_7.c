# include<stdio.h>

int main() {
    for(int i=1;i<=5;i++)
    {
        int k=1,w=1;
        for(int j=1;j<=9;j++)
        {
            if(j>=5-i&&j<=4+i)
            {
                if(w)    
                {    printf("%d",k);
                    j<4?k++:k--;
                }
                else{
                    printf(" ");
                }
                w=1-w;
            }
            else{
                printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}