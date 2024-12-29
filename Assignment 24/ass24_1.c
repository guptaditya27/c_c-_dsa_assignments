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
int main() {
char name[5][50];
input(name,5);
print(name,5);

return 0;
}