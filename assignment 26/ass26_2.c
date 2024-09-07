# include<stdio.h>
#include<string.h>

struct Employee
{
    int Id;
    char Name[20];
    float salary;

};
int main() {
    struct Employee e1;
    printf("Enter Id ,Nmae,salary :- ");
    scanf("%d",&e1.Id);
    fflush(stdin);
    fgets(e1.Name,20,stdin);
    e1.Name[strlen(e1.Name)-1]='\0';
    scanf("%f",&e1.salary);
    printf("%d \"%s\" %.2f",e1.Id,e1.Name,e1.salary);


    return 0;
}