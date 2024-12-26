# include<stdio.h>
#include<string.h>
void to_lower(char *c)
{
    int i;
    for(i=0;*(c+i);i++)
    {
        if(*(c+i)>='A'&&*(c+i)<='Z')
            *(c+i)+=32;
    }
}
int main() {
    char str[]="Rahul ka baap Modi";
    to_lower(str);
    printf("%s",str);
    return 0;
}