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
void count_vowel(char str[][50],int n)
{
    char vowel[11]="AEIOUaeiou";
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;str[i][j];j++)
        {
            int w=0;
            while(vowel[w])
            {
                if(str[i][j]==vowel[w])
                {
                    count++;
                    break;
                }
                w++;
            }
        }
        printf("Number Vowels In string %s %d\n",str[i],count);
        
    }
}
int main() {
char name[5][50];
input(name,5);
count_vowel(name,3);
print(name,5);

return 0;
}