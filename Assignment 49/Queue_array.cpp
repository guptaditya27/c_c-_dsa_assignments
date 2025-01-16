#include<iostream>
using namespace std;
#include<stdio.h>
#define Queue_Doesnt_Exist 1
#define Queue_overflow 2
#define Queue_underflow 3
#define Queue_Empty 4

class Queue{
    private:
        int* queue;
        int capacity;
        int last;
    public:
        Queue();
        Queue(int);
        ~Queue();
        Queue(Queue&);
        void create_queue(int);
        void clear();
        void push(int);
        void pop();
        void display();


};
void Queue::clear(){
    try{
        if(queue==NULL)
            throw Queue_Doesnt_Exist;
        delete []queue;
        capacity=0;
        last=-1;
    }
    catch(int e){
        if(e==1)
            cout<<"Queue_Doesnt_Exist"<<endl;
    }
}
Queue::Queue(Queue &Q){
    if(Q.queue==NULL){
        queue=NULL;
        capacity=0;
        last=-1;

    }
    else{
        capacity=Q.capacity;
        last=Q.last;
        queue=new int[capacity];
        for(int i=0;i<=last;i++){
            queue[i]=Q.queue[i];
        }
    }
}
Queue::~Queue(){
    delete []queue;
    queue=NULL;
    last=-1;
    capacity=0;
}
void Queue::display(){
   try{
        if(queue==NULL)
            throw Queue_Doesnt_Exist;
        else if(last==-1)
            throw Queue_Empty;
        for(int i=0;i<=last;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Queue_Doesnt_Exist"<<endl;
        else if(e==4)
            cout<<"Queue_Empty"<<endl;
    } 
}
void Queue::pop(){
   try{
        if(queue==NULL)
            throw Queue_Doesnt_Exist;
        else if(last==-1)
        {
            delete []queue;
            capacity=0;
            throw Queue_Empty;
        }
        
        cout<<queue[0]<<endl;
        if(last==0){
            last--;
        }
        else{
            for(int i=0;i<=last-1;i++)
            {
                queue[i]=queue[i+1];
            }
            last--;
        }

    }
    catch(int e){
        if(e==1)
            cout<<"Queue_Doesnt_Exist"<<endl;
        else if(e==4){
            cout<<"Queue_Empty"<<endl;
        }
    } 
}
void Queue::push(int val){
    try{
        if(queue==NULL)
            throw Queue_Doesnt_Exist;
        else if(last==capacity-1)
            throw Queue_overflow;
        last++;
        queue[last]=val;
    }
    catch(int e){
        if(e==1)
            cout<<"Queue_Doesnt_Exist"<<endl;
        else if(e==2)
            cout<<"Queue_overflow"<<endl;
    }
}
void Queue::create_queue(int cap){
    if(cap>=0){
        capacity=cap;
        last=-1;
        queue= new int[capacity];

    }
    else{
        cout<<"Queue Not Created !!"<<endl;
    }
}
Queue::Queue(){
    queue=NULL;
    capacity=0;
    last=-1;
}
Queue::Queue(int cap){
    if(cap>=0){
        capacity=cap;
        last=-1;
        queue=new int[capacity];
    }
    else{
        capacity=0;
        last=-1;
        queue=NULL;
    }
}
int main()
{
   Queue Q(3);
   Q.push(5);
   Q.push(14);
   Q.pop();
   Q.push(13);
   Queue P=Q;
   Q.display();
   P.display();
   Q.clear();
   Q.display();
   return 0;
}