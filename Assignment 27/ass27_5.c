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
int main() {
    
    return 0;
}