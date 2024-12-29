# include<stdio.h>
// chess match using round robin mtd
void update_scoreboard(int scoreboard[][4],int p1,int p2,int result)
{
    
    if(p1!=p2){
        scoreboard[p1][p2]=result;
        scoreboard[p2][p1]=2-result;
    }
    
    
}
void print_scores(int scoreboard[][4])
{
    int i,j;
    printf("  ");
    char k='A';
    for(i=0;i<=3;i++)
    {
        printf("%c ",k);
        k++;
    }
    k='A';
    printf("\n");
    for(i=0;i<=3;i++)
    {   printf("%c ",k);
        for(j=0;j<=3;j++){
            
            if(i==j)
                printf(" ");
            else{
                printf("%d ",scoreboard[i][j]);
            }
        }
        k++;
        printf("\n");
    }
}
int main() {
    int scoreboard[4][4]={0};
    //print_scores(scoreboard);
    for(int i=0;i<=3;i++)
    {
        for(int j=i+1;j<=3;j++)
        {
            int result;
            printf("Enter result of match b/n %c and %c");
            scanf("%d",&result);
            if(i!=j)
            {
                update_scoreboard(scoreboard,i,j,result);
            }
        }
    }
    return 0;
}