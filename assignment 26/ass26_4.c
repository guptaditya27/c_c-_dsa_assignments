# include<stdio.h>
struct Employee
{
    int Id;
    char Name[20];
    float salary;
};
struct Employee highest(struct Employee k[],int n)
{
    int i;
    struct Employee emp;
    emp=k[0];
    for(int i=0;i<n;i++)
    {
        if(emp.salary<k[i].salary)
            emp=k[i];
        
    }
    return emp;
}
void display(struct Employee);
void Display(struct Employee E)
{
    printf("%d \"%s\" %.2f",E.Id,E.Name,E.salary);

}
int main() {
    struct Employee e1={101,"Ram Raj",10000}; 
    struct Employee e2={102,"Raghu Raj",12000};
    struct Employee e3={103,"Raju Raj",20000};
    struct Employee e4={104,"Radhe Raj",15000};
    struct Employee e5={105,"Ramuu Raj",14000};
    struct Employee k[5]={e1,e2,e3,e4,e5};
    //struct Employee w=highest(k,5);
    Display(highest(k,5));
    

    return 0;
}