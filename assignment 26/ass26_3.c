/*
    stdin is a file pointer.
    fgets take \n also as element in string so 
    removing \n from 2nd last index and \0 adding to it.
    */
# include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char Name[20];
    float salary;
    char Job[30];
};
struct Employee input()
{
    struct Employee E;
    printf("Enter Id , Name ,Salary, job :-");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.Name,20,stdin);
    
    E.Name[strlen(E.Name)-1]='\0';
    scanf("%f",&E.salary);
    fflush(stdin);
    fgets(E.Job,30,stdin);
    E.Job[strlen(E.Job)-1]='\0';
    return E;

    
}
void display(struct Employee E)
{
    printf("%d \"%s\" %.2f %s",E.id,E.Name,E.salary,E.Job);
}
int main() {
    struct Employee E1;
    E1=input();
    display(E1);
    return 0;
}