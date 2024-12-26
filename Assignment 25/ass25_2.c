# include<stdio.h>
#include<string.h>
void search_all_occurence(char*str,char ch,int *arr,int size)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        if(*(str+i)==ch)
        {
            int k=0;
            while(*(arr+k)!=0&&k<size)
                k++;
            *(arr+k)=i;
        }
    }
}
int main() {
    char str[]="Rajumurliwarrukirabndrti";
    char ch='r';
    int arr[10]={0};
    search_all_occurence(str,ch,arr,10);
    for(int i=0;i<10;i++)
    {
        if(arr[i]!=0)
            printf("%d ",arr[i]);
    }
    return 0;
}