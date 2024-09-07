# include<stdio.h>
# include<string.h>
int main() {
    char a[50],ch;
    int count=0;
    printf("Enter Tring:- ");
    gets(a);
    printf("\nInput character to search:- ");
    scanf("%c",&ch);
    for(int i=0;a[i];i++)
    {
        if(a[i]==ch)
            count++;
    }
    printf("%c is repeated %d times in \"%s\"",ch,count,a);
    return 0;
}