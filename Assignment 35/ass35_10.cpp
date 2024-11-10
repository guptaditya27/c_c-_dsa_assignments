#include<iostream>
using namespace std;
#include<stdio.h>
class Array{
    private:
        int capacity;
        int lastindex;
        int* ptr;
    public:
        Array();
        Array(int);
        void Append();
        void Extend(int[]);
        void print();
        void 

};
Array::Array()
{
    ptr=NULL;
    capacity=0;
    lastindex=-1;
}
Array::Array(int cap)
{
    try{
        lastindex=-1;
        ptr=NULL;
        capacity=0;
        if(cap<0)
            throw 1;
        else{
            capacity=cap;
            lastindex=-1;
            ptr=new int[capacity];

        }

    }
    catch(int e)
    {
        if(e==1)
            cout<<"Neg Size Not Allowed !!"<<endl;
    }
}
int main()
{
   return 0;
}