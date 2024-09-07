#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char str[20];
    printf("Enter string:- ");
    fgets(str,20,stdin);
    int i=0;
    while(str[i])
    {
        i++;
    }
    

    printf("%d is length of string \"%s\"",i,str);
    return 0;
}