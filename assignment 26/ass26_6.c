# include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char Name[20];
    float salary;

};
void display(struct Employee E)
{
    printf("%d %s %f \n",E.id,E.Name,E.salary);
}
struct Employee input()
{
    struct Employee E;
    printf("Enter id, Name ,salary :- ");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.Name,20,stdin);
    E.Name[strlen(E.Name)-1]='\0';
    scanf("%f",&E.salary);
}
void display(struct Employee E)
{
    printf("%d %s %f \n",E.id,E.Name,E.salary);
}
void sort_Employee_name(struct Employee k[],int size)
{
    
}
int main() {
    struct Employee e1={101,"Ram Raj",10000}; 
    struct Employee e2={102,"Raghu Raj",12000};
    struct Employee e3={103,"Raju Raj",20000};
    struct Employee e4={104,"Radhe Raj",15000};
    struct Employee e5={105,"Ramuu Raj",14000};
    struct Employee k[5]={e1,e2,e3,e4,e5};
    sort_Employee_name(k,5);
    for(int i=0;i<5;i++)
    {
        printf("\n");
        display(k[i]);
    }
    return 0;
}