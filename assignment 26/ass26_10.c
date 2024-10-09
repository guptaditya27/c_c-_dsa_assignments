# include<stdio.h>
#include<string.h>
struct Marks{
    int Roll_NO;
    char name[30];
    float phy_marks;
    float chem_marks;
    float math_marks;

};

struct Marks Input_record()
{
    struct Marks S;
    printf("Enter Roll no :- ");
    scanf("%d",&S.Roll_NO);
    fflush(stdin);
    printf("Enter Name :- ");
    fgets(S.name,30,stdin);
    printf("Enter physics marks :- ");
    scanf("%f",&S.phy_marks);
    printf("Enter Chemistry marks :- ");
    scanf("%f",&S.chem_marks);
    printf("Enter Math's marks :- ");
    scanf("%f",&S.math_marks);
    return S;

}
void Display(struct Marks *M)
{
    printf("\n");
    printf(" ROLL NO :- %d\n",&M->Roll_NO);
    printf(" Name :-  %s",&M->name);
    printf(" Physics Marks :-  %.2f\n",M->phy_marks);
    printf(" Chemistry Marks :-  %.2f\n",M->chem_marks);
    printf(" Math's Marks :-  %.2f\n",M->math_marks);
    printf("\n");
}
int main() {
    int size=5;
    struct Marks M[size];
    int no_record;
    printf("Enter No record to Input:- ");
    scanf("%d",&no_record);
    for(int i=0;i<no_record;i++)
        M[i]=Input_record();
    int i=0;
    while(i<no_record){
        Display(&M[i]);
        i++;
    }
    return 0;
}