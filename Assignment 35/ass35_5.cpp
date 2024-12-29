#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<stdio.h>
class Matrix{
    private:
        int row,column;
        int**ptr;
    public:
        Matrix(int=3,int=3);
        int get_row();
        int get_column();
        void print();
        void Input();
        

};
void Matrix::Input()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Input"<<i<<j<<"element :- ";
            cin>>ptr[i][j];
        }
    }
}
Matrix::Matrix(int x,int y):row(x),column(y)
{
    ptr=new int[3][column];
}
int Matrix::get_row()
{
    return row;
}
int Matrix::get_column()
{
    return column;
}
void Matrix::print()
{
    for(int i=0;i<=row-1;i++)
    {
        for(int j=0;j<=column-1;j++)
            cout<<ptr[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
   Matrix M;
   M.Input();
   M.print();
   return 0;
}