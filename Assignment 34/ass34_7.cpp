#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
struct DOB
{
    int day;
    int month;
    int year;
};
void Input_Dob(DOB &);
void Input_Dob(DOB &D)
{
    cin>>D.day>>D.month>>D.year;


}
class Student{
    private:
        char stuname[30];
        char fathername[40];
        char Mothername[40];
        char Class[4];
        int age;
        DOB D;
        

    public:
        Student();
        void Display();

};

Student::Student()
{
    cout<<"Input Student Name:- ";
    fgets(stuname,30,stdin);
    stuname[strlen(stuname)-1]=0;
    cout<<"Input Father Name :-";
    fgets(fathername,40,stdin);
    fathername[strlen(fathername)-1]=0;
    cout<<"Input Mother Name :- ";
    fgets(Mothername,40,stdin);
    Mothername[strlen(Mothername)-1]=0;
    cout<<"Input Class :- ";
    fgets(Class,4,stdin);
    Class[strlen(Class)-1]=0;
    cout<<"Input Age of Student :- ";
    cin>>age;
    cout<<"Enter Date of Birth :- ";
    Input_Dob(D);
    
    


}
void Student::Display()
{
    cout<<endl<<endl;

    cout<<"Student Name :-"<<stuname<<endl;
    cout<<"Student Age :- "<<age<<endl;
    cout<<"Student DOB :-"<<D.day<<"-"<<D.month<<"-"<<D.year<<endl;
    cout<<"Class :-"<<Class<<endl;
    cout<<"Father's Name :- "<<fathername<<endl;
    cout<<"Mother's Name :-"<<Mothername<<endl;
    

}
int main()
{
   Student S;
   S.Display();
   return 0;
}