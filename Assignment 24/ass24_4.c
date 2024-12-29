# include<stdio.h>
#include<string.h>
void input(char str[][50],int n)
{
    int i;
    printf("Input %d String's :- ",n);
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        str[i][strlen(str[i]-1)]='\0';
    }
}
void print(char str[][50],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;str[i][j];j++)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
}
void copy(char*c,char*d)
{
    
}
void trim(char*c)
{

}
int main() {
    char str[200]="mysirg Education services pvt ltd";
    char str[10][200];
    

    return 0;
}