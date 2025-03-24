#include<iostream>
using namespace std;
#include<stdio.h>
template<class X>
struct Node{
    X item;
    Node<X> *next;
    Node<X> *prev;
};
template<class X>
class DLL{
    private:
        Node<X> *start;
        Node<X> *end;
    protected:
        Node<X>* get_position(X); 
    public:
        DLL();
        DLL(X);
        void append(X);
        void print();
};
template<class X>
Node<X>* DLL<X>::get_position(X a){
   try{
    if(start==NULL)
        throw 1;
    
   }
   catch(int e){
    if(e==1)
        cout<<"List doesn't Exist !!"<<endl;
   }  
}
template<class X>
void DLL<X>::print(){
    try{
        if(start==NULL)
            throw 1;
        Node<X> *t=start;
        while(t){

            cout<<t->item<<" ";
            if(t==end)
                break;
            
            t=t->next;
        }
        cout<<endl;

        
    }
    catch(int e){
        if(e==1)
            cout<<"List Doesn't Exist !!"<<endl;
    }
}
template<class X>
DLL<X>::DLL(){
    start=NULL;
}
template<class X>
DLL<X>::DLL(X a){
    Node<X> *t=new Node<X>;
    t->item=a;
    t->next=NULL;
    t->prev=NULL;
    start=t;
    end=t;
}
template<class X>
void DLL<X>::append(X a)
{
    Node<X> *t=new Node<X>;
    t->item=a;
    t->next=NULL;
    if(start==NULL){
        start=t;
        t->prev=NULL;
        end=t;
    }
    else{
        t->prev=end;
        end->next=t;
        end=t;
    }

}
int main()
{
    DLL<int> D(5);
    D.append(10);
    D.append(15);
    D.print();
    return 0;
}