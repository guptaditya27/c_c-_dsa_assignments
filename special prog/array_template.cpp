#include<iostream>
#include<stdio.h>
#include<typeinfo>
using namespace std;
// Array Template.
template<class X>
class Array{
    private:
        int capacity;
        int lastindex;
        X *ptr;

    public:
        Array();
        Array(int cap);
        Array(Array&);
        ~Array();
        void print();
        void insert(X a);
        void clear();
        void create_array(int);
        void sort(int=1);

};
template<class X>
Array<X>::Array(){
    ptr=NULL;
    capacity=0;
    lastindex=-1;
}
template<class X>
Array<X>::Array(int cap){
    if(cap>0)
    {
        capacity=cap;
        ptr=new X [capacity];
        lastindex=-1;
        cout<<"Array of size "<<capacity<<" created Successfully !!"<<endl;

    }
    else{
        capacity=0;
        ptr=NULL;
        lastindex=-1;
        cout<<"Array Doesn't Created !!"<<endl;

    }

}
template<class X>
void Array<X>::print(){
    try{
        if(ptr==NULL){
            throw 1;
        }
        else if(sizeof(X)==4||sizeof(X)==8)
        {
            int i=0;
            while(i<=lastindex){
                cout<<ptr[i]<<" ";
                i++;
            }
            cout<<endl;
        }
        else{
            int i=0;
            while(i<=lastindex){
                cout<<ptr[i];
                i++;
            }
            cout<<endl; 
        }
    }
    catch(int e){
        if(e==1){
            cout<<"Array Doesn't Exist !!"<<endl;
        }
    }
}
template<class X>
void Array<X>::insert(X a){
    try{
        if(ptr==NULL)
            throw 1;
        else if(lastindex==capacity-1){
            throw 2;
        }
        else{
            lastindex++;
            ptr[lastindex]=a;
            
            
        }
    

    }
    catch(int e){
        if(e==1){
            cout<<"Array Doesn't Exist"<<endl;
        }
        else if(e==2){
            cout<<"Array Overflow !!";
        }
    }
}
template<class X>
Array<X>::Array(Array&A){
    capacity=A.capacity;
    lastindex=A.lastindex;
    ptr=new X[capacity];
    int i=0;
    while(i<=lastindex){
        ptr[i]=A.ptr[i];
        i++;
    }
}
template<class X>
Array<X>::~Array(){
    delete []ptr;

}
template<class X>
void Array<X>::create_array(int cap){
    try{
        if(cap<=0)
            throw 1;
        else if(ptr!=NULL)
            throw 2;
        ptr=new X[cap];
        capacity=cap;
    }
    catch(int e){
        if(e==1){
            cout<<"Invalid Capacity Value !!"<<endl;
        }
        else if(e==2){
            cout<<"Array Already Exist !!"<<endl;
        }
        
    }
}
template<class X>
void Array<X>::clear(){
    if(ptr){
        delete []ptr;
        ptr=NULL;
        capacity=0;
        lastindex=-1;
    }
}
template<class X>
void Array<X>::sort(int asc){
    try{
        if(ptr==NULL)
            throw 1;
        else if(asc!=0&&asc!=1)
            throw 2;
        if(asc){
            for(int i=0;i<lastindex;i++){
                int swap=0;
                for(int j=0;j<lastindex-i;j++){
                    if(ptr[j]>ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                        swap=1;
                    }
                }
                if(swap==0)
                    break;
            }
        }
        else if(asc==0){
            for(int i=0;i<lastindex;i++){
                int swap=0;
                for(int j=0;j<lastindex-i;j++){
                    if(ptr[j]<ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                        swap=1;
                    }
                }
                if(swap==0)
                    break;
            }
        }
    }
    catch(int e){
        if(e==1){
            cout<<"Array Doesn't Exist !!"<<endl;
        }
        else if(e==2){
            cout<<"invalid Sorting parameter !!"<<endl;
        }
    }
}
int main()
{
    Array<char> A(5);
    A.insert('A');
    A.insert('D');
    A.insert('I');
    A.insert('Y');
    A.insert('A');
    Array<char>K=A;
    K.print();
    A.sort();
    A.print();
    return 0;
}