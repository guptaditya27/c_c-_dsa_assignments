#include<iostream>
using namespace std;
#include<stdio.h>
class Array{
    private:
        int size;
        int* ptr;
    public:
        Array(int);
        Array();
        void create_Array(int);
        void append(int);
        bool is_full();
        bool is_empty();

};
bool Array::is_full(){
    
}
void Array::append(int data)
{
    
}
void Array::create_Array(int s)
{
    if(s<0)
        cout<<"negative Size Not Allowed !!"<<endl;
    else{
        size=s;
        ptr=new int[size];
    }
}
Array::Array()
{
    ptr=NULL;
    size=0;
}
Array::Array(int s)
{
    if(s<0)
        cout<<"Negative Size Not Allowed !!"<<endl;
    else{    
        size=s;
        ptr=new int[size];
    }
}
int main()
{
   return 0;
}