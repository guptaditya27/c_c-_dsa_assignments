#include<iostream>
using namespace std;
class Numbers
{
    private:
        int size;
        int* ptr;
    public:
        Numbers();
        Numbers(int);
        ~Numbers();
        Numbers(Numbers&); 
        void print();
        void create_array(int);
        void input();

};
Numbers::Numbers(Numbers& N)
{
    size=N.size;
    if(N.ptr==NULL)
        ptr=NULL;
    else{
        ptr=new int [size];
        for(int i=0;i<size;i++)
            ptr[i]=N.ptr[i];
    }
}
Numbers::~Numbers()
{
    delete []ptr;
}
void Numbers::input()
{
    try{
        if(ptr==NULL)
            throw 1;
        for(int i=0;i<size;i++)
        {
            cout<<"Input "<<i<<" value :- ";
            cin>>ptr[i];
            
        }
        cout<<endl;
    }
    catch(int e)
    {
        if(e==1)
            cout<<"List Not Found !!"<<endl;
    }
}
void Numbers::create_array(int s)
{
    try{
        if(s<0)
            throw 1;
        else if(ptr!=NULL)
            throw 2;
        else{
            size=s;
            ptr=new int [size];
        }
    }
    catch(int e)
    {
        if(e==1)
            cout<<"Invalid size Entered !! "<<endl;
        else if(e==2)
            cout<<"Array Already Exist !! "<<endl;
    }
}
void Numbers::print()
{
    if(ptr==NULL)
        cout<<"NUMber List Not Found !! "<<endl;
    else{
        int i=0;
        for(i;i<size;i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
}
Numbers::Numbers()
{
    size=0;
    ptr=NULL;
}
Numbers::Numbers(int s)
{
    try{
        if(size<=0)
            throw 1;
        size=s;
        ptr= new int[size];
    }
    catch(int e)
    {
        if(e==1)
            cout<<"Size is Not Appropriate !!"<<endl;
    }

}
int main()
{
   Numbers N(5);
    N.create_array(5);
    N.input();
    Numbers p=N;
    p.print();
    N.print();
   return 0;
}