# include<stdio.h>

int main() {
    char c;
    printf("INPUT A Character :- ");
    scanf("%c",&c);
    switch ((int)c)
    {
    case 65 ... 90:
    {
        printf("%c is Uppercase Alphabet",c);
        break;
    }
    case 91 ... 96:
    {
        printf("%c is special character",c);
        break;
    }
    case 97 ... 122:
    {
        printf("%c is in Lowercase Alphabet",c);
        break;
    }
    case 123 ... 127:
    {
        printf("%c is special character",c);
        break;
    }
    case 58 ... 64:
    {
        printf("%c is special character",c);
        break;
    }
    case 48 ... 57:
    {
        printf("%c is a Number",c);
        break;
    }
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}