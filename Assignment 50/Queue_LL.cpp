#include<iostream>
using namespace std;
#include<stdio.h>
struct Node{
    int item;
    Node*next;
    int index;
};
class Queue{
    private:
        Node*last;
    protected:
        Node* create_node(int,int=0);
    public:
        Queue();
        ~Queue();
        Queue(Queue&);
        void Insert(int);
        void current_status();
        void print();
        void pop();
        void del();
        void count();
        void 

};
Queue::Queue(Queue&Q){
    last=NULL;
    if(Q.last==NULL)
        last=NULL;
    else{
        Node*t=Q.last->next;
        while(t){
            Insert(t->item);
            if(t==Q.last)
                break;
            t=t->next;
            
        }
    }
}
void Queue::del(){
    Node*t=last->next;
    Node*p=last->next->next;
    if(last->next==last)
    {
        delete last;
        last=NULL;
    }
    else{
        last->next=p;
        delete t;
    }
}
Queue::~Queue(){
    while(last)
    {
        del();
    }
}
void Queue::current_status(){
    
    
    cout<<"Queue:- ";
    if(last==NULL){
        cout<<"Doesn't Exist"<<endl;
        cout<<"Total Elements :- "<<0<<endl;
    }
    else{
        cout<<" IS Exist"<<endl;
        cout<<"Total Elements :- "<<(last->index+1);
    }
    
}
void Queue::pop(){
    try{
        if(last==NULL)
            throw 1;
        cout<<"POPPED :- "<<last->next->item<<endl;
        if(last->next==last){
            delete last;
            last=NULL;
        }
        else{
            Node*t=last->next->next;// 2nd Node;
            Node*p=last->next;// 1st Node;
            last->next=t;
            delete p;
            while(t){
                t->index-=1;
                if(t==last)
                    break;
                t=t->next;
            }
        }
        current_status();
        

        
    }
    catch(int e){
        if(e==1)
            cout<<"Queue Doesn't Exist"<<endl;
        else if(e==2)
            cout<<"Invalid Parameter Encounterd !!"<<endl;
    }
}
void Queue::print(){
    try{
        if(last==NULL)
            throw 1;
        Node*t=last->next;
        cout<<"QUEUE :- ";
        while(t){
            cout<<t->item<<" ";
            if(t==last)
                break;
            t=t->next;
        }
        cout<<endl;
        
    }
    catch(int e){
        if(e==1)
            cout<<"Queue Doesn't Exist"<<endl;
        else if(e==2)
            cout<<"Invalid Parameter Encounterd !!"<<endl;
    }    
}
Node* Queue::create_node(int val,int ind){
    Node*n=new Node;
    n->item=val;
    n->next=NULL;
    n->index=ind;
    return n;
}
Queue::Queue(){
    last=NULL;
}
void Queue::Insert(int val){
    Node*t;
    if(last==NULL)
    {
        t=create_node(val);
        last=t;
        t->next=t;
    }
    else{
        t=create_node(val,last->index+1);
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
int main()
{
   Queue Q;
   Q.Insert(10);
   Q.Insert(20);
   Q.Insert(30);
   Queue W=Q;
   W.print();
   Q.pop();

   return 0;
}
/*
try{
    if(last==NULL)
        throw 1;
    else if(cap<=0)
        throw 2;
    
}
catch(int e){
    if(e==1)
        cout<<"Queue Doesn't Exist"<<endl;
    else if(e==2)
        cout<<"Invalid Parameter Encounterd !!"<<endl;
}*/