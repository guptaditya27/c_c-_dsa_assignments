# include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
   char Name[30];
   char Rollno[10];
   char College_Name[50];

};
struct Team{
    struct Student S1;
    struct Student S2;
};
struct Student* newstudent(char n[],char r[],char c[])
{
    struct Student *p;// p is pointer pointing structure
    p=(struct Student*)malloc(sizeof(struct Student));
    strcpy(p->Name,n);
    strcpy(p->Rollno,r);
    strcpy(p->College_Name,c);
    return p;

}
int main() {
    
    return 0;
}