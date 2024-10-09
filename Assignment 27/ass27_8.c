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
struct Team* newteam(struct Student x,struct Student y)
{
    struct Team*p;
    p=(struct Team*)malloc(sizeof(struct Team));
    p->S1=x;
    p->S2=y;
    return p;

}
void Displaystud(struct Student s)
{
    printf("\n%s\n%s\n%s",s.Name,s.Rollno,s.College_Name);

}
void Displayteam(struct Team T)
{
    printf("Team :- \n");
    Displaystud(T.S1);
    Displaystud(T.S2);
}
int main() {
    
    return 0;
}