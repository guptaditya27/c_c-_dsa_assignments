# include<stdio.h>

int main() {
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if((int)c>=65&&(int)c<=90)
    {
        printf("\"%c\" is a uppercase Alphabet",c);
    }
    else  if ((int)c>=48&&(int)c<=57)
    {
        printf("\"%c\" is a Number",c); 
    }
    else if ((int)c>=97&&(int)c<=122)
    {
        printf("\"%c\" is a Lowermcase Alphabet",c);
        
    }
    else{
        printf("\"%c\" is a Special Character",c); 
    }
    
    
    return 0;
}