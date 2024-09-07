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
    e1.Id=101;
    strcpy(e1.Name,"Raju Teli");
    e1.salary=15000.23;
    printf("%d \"%s\" %.2f",e1.Id,e1.Name,e1.salary);
    struct Employee e2={102,"Ramu Kaka",12000};
    printf("\n%d \"%s\" %.2f",e2.Id,e2.Name,e2.salary);

    return 0;
}