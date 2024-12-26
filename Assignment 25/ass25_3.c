# include<stdio.h>
#include<string.h>
void to_upper(char *c)
{
    int i;
    for(i=0;*(c+i);i++)
    {
        if(*(c+i)>='a'&&*(c+i)<='z')
            *(c+i)-=32;
    }
}
int main() {
    char str[]="aditya Gupta";
    to_upper(str);
    printf("%s",str);
    return 0;
}