# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<math.h>
char* Input_string()
{
    char ch,*p=NULL,*q=NULL;
    int i,size=1;
    printf("Enter String :- \n");
    p=(char*)malloc(size);
    p[0]='\0';
    while(1)
    {
        ch=getchar();
        if(ch =='\n')
            break;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
        {
            q[i]=p[i];

        }
        q[i-1]=ch;
        q[i]='\0';
        free(p);
        size++;
        p=(char*)malloc(size+1);
        strcpy(p,q);
        free(q);

    }
    return p;
}
//Dma Dynamic memory Allocation
// store variable length string without memory westage
int main() {
    char *str;
    str=Input_string();
    printf("%s",str);
    return 0;
}