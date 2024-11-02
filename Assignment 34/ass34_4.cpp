#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
class Book
{
    private:
        char title[30];
        int price;
        char author[30];

    public:
        Book();
        Book(char[],int,char[]);
        void print();
};
Book::Book(char a[],int x,char y[])
{
    strcpy(title,a);
    price=x;
    strcpy(author,y);
}
void Book::print()
{
    cout<<"Book title :- "<<title<<endl;
    cout<<"price :- "<<price<<endl;
    cout<<"Author :- "<<author<<endl;
}
Book::Book()
{
    strcpy(title," Ramayana ");
    price=1000;
    strcpy(author,"Maharishi Balmiki ");
}
int main()
{
   Book B("GoGo",100,"Raju");
   B.print();
   return 0;
}