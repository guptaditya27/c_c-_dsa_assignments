#include<stdio.h>
#include<string.h>

struct Student
{
    int Rollno;
    char name[50];
    char class[60];
    char father_name[50];
    char mother_name[50];
    char mobile_no[12];
    char student_id[10];
    char address[100];


};
struct Student input_student();
void Display_student(struct Student);
struct Student input_Student()
{
    struct Student s;
    printf("Enter student id:- ");
    fgets(s.student_id,10,stdin);
    printf("Input Roll NO:- ");
    scanf("%d",&s.Rollno);
    printf("Enter Student Name:- ");
    fflush(stdin);
    
    fgets(s.name,50,stdin);
    printf("Enter Class :- ");
    fgets(s.class,60,stdin);
    printf("Enter Father's Name:- ");
    fflush(stdin);
    fgets(s.father_name,50,stdin);
    printf("Enter Mother's Name :- ");
    //fflush(stdin);
    fgets(s.mother_name,50,stdin);
    printf("Enter Mobile No :- ");
    //fflush(stdin);
    fgets(s.mobile_no,12,stdin);
    printf("Enter Address:- ");
    fgets(s.address,100,stdin);
    
    return s;

    

}
void Display_student(struct Student s)
{
    printf("\n");
    printf(" Student Id :- %s",s.student_id);
    printf(" Student Name:- %s",s.name);
    printf(" Roll NO :- %d\n",s.Rollno);
    printf(" Class :- %s",s.class);
    printf(" Father's Name :- %s",s.father_name);
    printf(" Mother's Name :- %s",s.mother_name);
    printf(" Contact No;- %s",s.mobile_no);
    printf(" Contact Address :- %s",s.address);
}
int main()
{
    //struct Student student1;
    
    struct Student S[10];//structure Array 
    for(int i=0;i<2;i++)
        S[i]=input_Student();
    int i=0;
    while(i<2){
        Display_student(S[i]);
        i++;
    }
    return 0;
}
/* now to store locally till lifetime of program we can create an array which 
will hold all these structure values locally*/
/*
for storing it locally we can use structure array 
syntx struct student s[5]
structure array having size 5 will be created */
