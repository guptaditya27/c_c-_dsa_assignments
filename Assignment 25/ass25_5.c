# include<stdio.h>
#include<string.h>
void extract_string(char*str,int start_index,int end_index,char*result)
{
    char str1[end_index-start_index+1];
    int k=0;
    for(int i=start_index;i<end_index;i++,k++)
    {
        str1[k]=str[i];
    }
    str1[k]='\0';
    strcpy(result,str1);
    result[k]='\0';

}
int main() {
    char str[]="raju ki maakichut";
    char result[50];
    extract_string(str,8,16,result);
    printf("%s",result);

    return 0;
}