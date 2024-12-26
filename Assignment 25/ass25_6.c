# include<stdio.h>
#include<string.h>
void swap(char*c,char*d)
{
    if(strlen(c)==strlen(d))
    {
        for(int i=0;i<c[i]&&d[i];i++)
        {
            char C=*(c+i);
            *(c+i)=*(d+i);
            *(d+i)=C;
        }
    }
    else{
        printf("Swapping Not Possible \n");
    }
}
int main() {
    char str1[]="mutthi ";
    char str2[]="maardii";
    printf("%s %s\n",str1,str2);
    swap(str1,str2);
    printf("%s %s\n",str1,str2);

    return 0;
}