# include<stdio.h>

int main() {
    char a,b,c;
    printf("input three characters");
    scanf("%c %c %c",&a,&b,&c);
    int ascii_code1= (int)a;
    int ascii_code2=(int)b;
    int ascii_code3=(int)c;
    printf("ascii value for char %c is %d",a,ascii_code1);
    printf("\nascii value for char %c is %d",b,ascii_code2);
    printf("\nascii value for char %c is %d",c,ascii_code3);

    return 0;
}