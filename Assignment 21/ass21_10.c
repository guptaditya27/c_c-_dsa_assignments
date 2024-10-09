# include<stdio.h>
int first_occurence(char*,char);
int main() {
    char str1[10]="pkditya";
    printf("%d",first_occurence(str1,'a'));
    return 0;
}
int first_occurence(char*c,char k)
{
    int i=0;
    while(*(c+i))
    {
        if(*(c+i)==k)
            return i;
        i++;
    }
}
