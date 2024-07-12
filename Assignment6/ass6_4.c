# include<stdio.h>
// check alphabet lowercase uppercase
int main() {
    char c;
    printf("Enter a Character:- ");
    scanf("%c",&c);
    if ((int)c>=65&&(int)c<=90)
    {
        printf("\"%c\" is in Uppercase",c);
    }
    else if((int)c>90&&(int)c<=122)
    {
        printf("\"%c\" is in Lowercase",c);
        
    }
    else{
        printf("\"%c\" is Not a valid Input",c);

    }
    
    return 0;
}