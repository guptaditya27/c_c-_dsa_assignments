# include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void sort_salary_employee(struct Employee k[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(k[i].salary<k[j].salary)
            {
                struct Employee w=k[i];
                k[i]=k[j];
                k[j]=w;

            }
        }
    }
}
void display(struct Employee E)
{
    printf("%d %s %.2f",E.id,E.name,E.salary);
}
int main() {
    struct Employee e1={101,"Ram Raj",10000}; 
    struct Employee e2={102,"Raghu Raj",12000};
    struct Employee e3={103,"Raju Raj",20000};
    struct Employee e4={104,"Radhe Raj",15000};
    struct Employee e5={105,"Ramuu Raj",14000};
    struct Employee k[5]={e1,e2,e3,e4,e5};
    sort_salary_employee(k,5);
    for(int i=0;i<5;i++)
    {
        printf("\n");
        display(k[i]);
    }
    return 0;
}