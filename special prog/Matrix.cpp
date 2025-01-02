
#include <iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<math.h>
class Matrix{
    private:
        int **ptr;
    public:
        Matrix();
        
        void set_matrix();
        void set_matrix(int [][3]);
        void print();
        Matrix(Matrix &);
        Matrix operator=(Matrix&);
        //friend Matrix add(Matrix &,Matrix &);
        //friend Matrix sub(Matrix &,Matrix &);
        //friend Matrix mul(Matrix &,Matrix &);
        void clear();
        Matrix transpose();
        //friend transpose(Matrix &);
        Matrix operator+(Matrix &);
        Matrix operator-(Matrix &);
        Matrix operator*(Matrix &);
        
};
Matrix::Matrix(){
    ptr=NULL;
}
void Matrix::set_matrix()
{
    try{
        if(ptr!=NULL)
            throw 1;
        else{
            ptr= new int*[3];
            for(int i=0;i<3;i++)
            {
                ptr[i]=new int[3];
                for(int j=0;j<3;j++){
                    cout<<"Enter ["<<i<<"]"<<"["<<j<<"] -> ";
                    cin>>ptr[i][j];
                }
            }
        }
    }catch(int e)
    {
        if(e==1)
            cout<<"Matrix Already Exist !!"<<endl;
    }
}
void Matrix::print()
{
  try{
        if(ptr==NULL)
            throw 1;
        else{
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++){
                    cout<<ptr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }catch(int e)
    {
        if(e==1)
            cout<<"Matrix Doesn't Exist !!"<<endl;
    }  
}
void Matrix::set_matrix(int M[][3]){
        if(ptr!=NULL)
            clear();
        ptr=new int*[3];
        for(int i=0;i<3;i++)
        {
            ptr[i]=new int[3];
            for(int j=0;j<3;j++)
            {
                ptr[i][j]=M[i][j];
            }
        }
        
    
}
void Matrix::clear(){
    if(ptr!=NULL)
    {
        for(int i=0;i<3;i++)
        {
            delete []ptr[i];
        }
        delete []ptr;
        ptr=NULL;
    }
}
Matrix::Matrix(Matrix&M){
    if(M.ptr==NULL)
    {
        ptr=NULL;  
    }
    else{
        ptr=new int*[3];
        for(int i=0;i<3;i++)
        {
            ptr[i]=new int[3];
            for(int j=0;j<3;j++)
            {
                ptr[i][j]=M.ptr[i][j];
            }
        }
    }
}
Matrix Matrix::operator=(Matrix &M){
    
    
    if(ptr!=NULL)
        clear();
    if(M.ptr==NULL)
    {
        ptr=NULL;
    }
    else{
        ptr=new int*[3];
        for(int i=0;i<3;i++)
        {
            ptr[i]=new int[3];
            for(int j=0;j<3;j++)
            {
                ptr[i][j]=M.ptr[i][j];
            }
        }
    }
    return *this;
}
/*Matrix add(Matrix&M1,Matrix&M2){
    try{
        Matrix M;
        if(M1.ptr==NULL&&M2.ptr==NULL)
            throw 1;
        if(M1.ptr==NULL)
        {
            M=M2;
        }
        else if(M2.ptr==NULL)
        {
            M=M1;
        }
        else{
            int W[3][3];
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    W[i][j]=M1.ptr[i][j]+M2.ptr[i][j];
                }
            }
            M.set_matrix(W);
        }
        return M;
        
    }
    catch(int e){
        if(e==1)
            cout<<"Reference Having NULL !!"<<endl;
        Matrix P;
        return P;
    }
}
Matrix sub(Matrix&M1,Matrix&M2){
    try{
        Matrix M;
        if(M1.ptr==NULL&&M2.ptr==NULL)
            throw 1;
        if(M1.ptr==NULL)
        {
            M=M2;
        }
        else if(M2.ptr==NULL)
        {
            M=M1;
        }
        else{
            int W[3][3];
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    W[i][j]=M1.ptr[i][j]+M2.ptr[i][j];
                }
            }
            M.set_matrix(W);
        }
        return M;
        
    }
}
Matrix mul(Matrix&M1,Matrix&M2){
    try{
        Matrix M;
        if(M1.ptr==NULL&&M2.ptr==NULL)
            throw 1;
        if(M1.ptr==NULL)
        {
            M=M2;
        }
        else if(M2.ptr==NULL)
        {
            M=M1;
        }
        else{
            int W[3][3];
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    W[i][j]=M1.ptr[i][j]+M2.ptr[i][j];
                }
            }
            M.set_matrix(W);
        }
        return M;
        
    }
}
*/
Matrix Matrix::operator+(Matrix&M)
{
    try{
        if(M.ptr==NULL)
            throw 1;
        if(ptr==NULL)
        {
            ptr=new int*[3];
            for(int i=0;i<3;i++)
            {
                ptr[i]=new int[3];
                for(int j=0;j<3;j++)
                {
                    ptr[i][j]+=M.ptr[i][j];
                }
            }
        }
        else{
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    ptr[i][j]+=M.ptr[i][j];
                }
            }
        }
        return *this;
    }
    catch(int e){
        if(e==1)
            cout<<"Reference is NULL!!"<<endl;
        return *this;
    }
}
Matrix Matrix::operator-(Matrix&M)
{
    try{
        if(M.ptr==NULL)
            throw 1;
        if(ptr==NULL)
        {
            ptr=new int*[3];
            for(int i=0;i<3;i++)
            {
                ptr[i]=new int[3];
                for(int j=0;j<3;j++)
                {
                    ptr[i][j]-=M.ptr[i][j];
                }
            }
        }
        else{
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    ptr[i][j]-=M.ptr[i][j];
                }
            }
        }
        return *this;
    }
    catch(int e){
        if(e==1)
            cout<<"Reference is NULL!!"<<endl;
        return *this;
    }
}
Matrix Matrix::operator*(Matrix&M)
{
    try {
        int arr[3][3] = {0};  // initialize with 0
        if (M.ptr == nullptr) throw 1;
        if (ptr == nullptr) throw 1;
        else {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int sum = 0;
                    for (int k = 0; k <= 2; k++) {
                        sum += (ptr[i][k] * M.ptr[k][j]);
                        cout << "Multiplying " << ptr[i][k] << " and " << M.ptr[k][j] << " -> sum: " << sum << endl;
                    }
                    arr[i][j] = sum;
                }
            }
            this->set_matrix(arr);
        }
        return *this;
    } catch (int e) {
        if (e == 1) cout << "Reference is NULL!!" << endl;
        return *this;
    }

    
}
Matrix Matrix::transpose(){
    if(ptr!=NULL)
    {
        int i=0,j=0,k=0;
        for(i=0,j=0,k=1;k<=3;k++){
            int temp=ptr[i][j];
            ptr[i][j]=ptr[j][i];
            ptr[j][i]=temp;
            if(j-i==1)
                j++;
            else{
                i++;
            }
        }
    }
    return *this;
}
int main()
{
    return 0;
}