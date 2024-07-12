#include <stdio.h>

int main() {
    int ascii_code;
    printf("enter ascii value");
    scanf("%d",&ascii_code);
    char character = (char)ascii_code;
    printf("ascii code for value %d is %c",ascii_code,character);
    
    return 0;
}
