#include<iostream>
using namespace std;
//input from user and store to 2d array
// creating array of class and no students
//int column=5;
void input_2d(int ,int,char[][5]);
int main()
{
   
   int row,column;
   cout<<"Enter row,column of Array";
   cin>>row>>column;
   char str[row][column];
   return 0;
}
void input_2d(int row,int column,char c[][5])
{
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            cout<<"Enter class "<<i<<" student"<<j<<":- "<<endl;
            cin>>c[i][j];
        }

}
