#include<iostream>
using namespace std;
class Matrix
{
    private:
        static int row,column;
        int matrix[3][3]={0};
    public:
        void set_value()
        {
            cout<<"Enter 9 values of Matrix:- "<<endl;
            for(int i=0;i<row;i++){ 
                for(int j=0;j<column;j++)
                {
                    cin>>matrix[i][j];
                }
                cout<<endl;
            }
        }
    
        void print_matrix()
        {
            for(int i=0;i<row;i++){
                
                for(int j=0;j<column;j++)
                {
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        Matrix add(Matrix);
        Matrix sub(Matrix);
        Matrix transpose();
        Matrix Multiply(Matrix);
        bool is_singular();

};
int Matrix::row=3;
int Matrix::column=3;
int main()
{
   Matrix m1,m2,m3,m4;
   m1.set_value();
   m2.set_value();
   m3=m1.Multiply(m2);
   m4=m3.transpose();
   m4.print_matrix();
   return 0;
}
Matrix Matrix::add(Matrix m)
{
    Matrix temp;
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=matrix[i][j]+m.matrix[i][j];
        }
    return temp;
}
Matrix Matrix::sub(Matrix m)
{
    Matrix temp;
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=matrix[i][j]-m.matrix[i][j];
        }
    return temp;
}
Matrix Matrix::transpose()
{
    Matrix temp;
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            temp.matrix[i][j]=matrix[j][i];
        }
    return temp;
}
Matrix Matrix::Multiply(Matrix m)
{
    Matrix temp;
    int sum;
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            sum=0;
            for(int k=0;k<row;k++)
            {
                sum=sum+matrix[i][k]*m.matrix[k][j];
            }
            temp.matrix[i][j]=sum;
        }
    return temp;
}
bool Matrix::is_singular()
{
    // Calculate the determinant
    int det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
              matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
              matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

    // Check if the determinant is zero
    return det == 0;
}
