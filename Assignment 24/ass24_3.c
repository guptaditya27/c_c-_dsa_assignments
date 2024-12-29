# include<stdio.h>
#include<string.h>
void  input(char str[][20],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Input %d String :- \n",i);
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';

    }
}
void print(char str[][20],int n)
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
void sort(char str[][20],int n)
{
    for(int r=0;)
}
int main() {
    char city[10][20];
    input(city,10);
    print(city,10);
    sort(city,10);


    return 0;
}