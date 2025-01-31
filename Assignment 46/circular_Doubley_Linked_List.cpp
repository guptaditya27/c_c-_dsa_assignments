#include<iostream>
using namespace std;
#include<stdio.h>
struct Node
{
    int item;
    Node*prev;
    Node*next;
};

class CDLL{
    private:
        Node *start;
    protected:
        Node*search(int);
        void Delete(Node*);
    public:
        CDLL();
        CDLL(CDLL&);
        ~CDLL();
        void Insert_front(int);
        void Insert_last(int);
        void Delete_front();
        void Delete_last();
        void clear();
        bool is_exist(int);
        void Delete(int);
        //void Reverse();
        //void Sort(int);
        void print();


};
bool CDLL::is_exist(int val){
    try{
        if(start==NULL)
            throw 1;
        Node*t=start;
        while(t){
            if(t->item==val)
                return 1;
            if(t->next==start)
                return 0;
            t=t->next;
        }
        
    }
    catch(int e){
        if(e==1)
            cout<<"LL Doesn't Exist !!"<<endl;
        return 0;
    }
}
void CDLL::Delete(int val){
    try{

        if(is_exist(val)){
            Node*t=search(val);
            Delete(t);

        }
        else{
            cout<<val<<" Value Not Found !!"<<endl;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"LL Doesn't Exist !!"<<endl;
    }
}
void CDLL::Delete(Node *n){
    Node*Prev=n->prev;
    Node*Next=n->next;
    if(Prev==Next)// single Node exist.
    {
        delete start;
        start=NULL;
    }
    else{
        Prev->next=Next;
        Next->prev=Prev;
        //valid for Last Node also
    }
}
Node* CDLL::search(int val){
    
    if(start==NULL)
        return NULL;
    Node*t=start;
    while(t){
        if(t->item==val)
            return t;
        if(t->next==start)
            return NULL;
        t=t->next;
        
    }
    
}
CDLL::CDLL(CDLL&C){
    start=NULL;
    if(C.start!=NULL){
        Node*t=C.start;
        Node*last=C.start->prev;
        while(t){
            Insert_last(t->item);
            if(t->next==C.start)
                break;
            t=t->next;
        }
    }
}
void CDLL::clear(){
    if(start!=NULL)
    {
        while(start){
            Delete_front();
        }
    }
}
CDLL::~CDLL(){
    while(start){
        Delete_front();
    }
}
void CDLL::Delete_last(){
    try{
        if(start==NULL)
            throw 1;
        if(start->next==start)// single node 
        {
            delete start;
            start=NULL;
        }
        else{
            Node*t=start->prev;// last Node;
            t->prev->next=start;
            start->prev=t->prev;
            delete t;

        }
    }
    catch(int e){
        if(e==1)
            cout<<"LL Doesn't Exist !!"<<endl;
    }
}
void CDLL::Delete_front(){
    try{
        if(start==NULL)
            throw 1;
        if(start->next==start)// single Node hai
        {
            delete start;
            start=NULL;

        }
        else{
            Node*t=start->next;
            t->prev=start->prev;
            start->prev->next=t;
            delete start;
            start=t;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"LL Doesn't Exist !!"<<endl;
    }
}
void CDLL::print(){
    try{
        if(start==NULL)
            throw 1;
        Node*t=start;
        while(t){
            cout<<t->item<<" "; 
            if(t->next==start)
                break;
            t=t->next;
        }
        cout<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"LL Doesn't Exist !!"<<endl;
    }
}
void CDLL::Insert_last(int val){
    Node*n=new Node;
    n->item=val;
    if(start==NULL)
    {
        start=n;
        n->prev=n;
        n->next=n;
    }
    else{
        n->next=start;
        Node*t=start->prev;// last Node
        n->prev=t;
        t->next=n;
        start->prev=n;
    }
}
CDLL::CDLL(){
    start=NULL;
}
void CDLL::Insert_front(int val){
    Node*n=new Node;
    n->item=val;
    if(start==NULL)
    {
        start=n;
        n->prev=n;
        n->next=n;

    }
    else{
        Node*t=start;// 1st Node;
        while(t->next!=start)
            t=t->next;// last Node;
        n->prev=t;
        n->next=start;
        start=n;
        t->next=n;
        
    }
}
int main()
{
   CDLL D;
   D.Insert_front(10);
   D.Insert_front(9);
   D.Insert_last(11);
   D.Insert_last(51);
   D.Insert_last(36);
   D.Insert_last(54);
   D.Insert_last(21);
   CDLL P=D;
   P.print();
   D.Delete_front();
   D.Delete_last();
   D.print();
   P.Delete(36);
   P.print();
   return 0;
}