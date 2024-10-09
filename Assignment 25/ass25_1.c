# include<stdio.h>
void swap(int *,int*);
int main() {
    int x=10,y=20;
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    

}