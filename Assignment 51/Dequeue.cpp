#include<iostream>
using namespace std;
#include<stdio.h>
struct Node{
   int item;
   Node*prev;
   Node*next;
   int index;
};
class Dequeue{
   private:
      Node*front;
      Node*rear;
   protected:
      Node* search(int);
      //void Delete(Node*);
   public:
      Dequeue();
      Dequeue(int);
      ~Dequeue();
      //Dequeue(Dequeue&);
      void Insert_front(int);
      void Insert_rear(int);
      void Delete_front();
      void Delete_rear();
      //void Delete_byindex(int);// by index value.
      //void Delete_byvalue(int);
      bool is_exist(int,int=0)// value.
      int get_front();
      int get_rear();
      void get_Node(int);
      bool is_empty();
      void print();



};
Node* Dequeue::search(int val){
   if(is_exist(val)){
      Node*t=front;
      while(t){
         if(t->item==val)
            return t;
         if(t==rear)
            return NULL;
         t=t->next;
      }
   }
   
}
bool Dequeue::is_exist(int value,int index){
   Node*t=front;
   if(index==0)
   {
      // search 1st occurence
      while(t){
         if(t->item==value)
            return 1;
         if(t==rear)
            break;
         t=t->next;
      }
      return 0;

   }
   else{
      while(t){
         if(t->item==value&&t->index=index)
            return 1;
         if(t==rear)
            break;
      }
      return 0;
   }
   
}
void Dequeue::get_Node(int index){
   try{
      if(front==NULL)
         throw 1;
      else if(index>rear->index||index<0)
         throw 2;
      int mid=rear->index/2;
      Node*t;
      index>=mid?t=rear:t=front;
      if(t==front){
         while(t){
            if(t->index==index)
               break;
            t=t->next;
         }
      }
      else{
         while(t){
            if(t->index==index)
               break;
            t=t->prev;
         }
      }

      cout<<"Node :- "<<"is Exist"<<endl;
      cout<<"value:- "<<t->item<<endl;
      cout<<"Index :- "<<t->index<<endl;

      
   }
   catch(int e){
      if(e==1)
         cout<<"Dequeue Doesn't Exist !!"<<endl;
      else if(e==2){
         cout<<"Invalid Index value !!"<<endl;
         cout<<"Node :- "<<"NULL"<<endl;
         cout<<"value:- "<<-100000<<endl;
         cout<<"Index :- "<<-99999<<endl;
      }
   }
}
bool Dequeue::is_empty(){
   if(front==NULL)
      return 1;
   return 0;
}
int Dequeue::get_rear(){
   try{
      if(rear==NULL)
         throw 1;
      return rear->item;
   }
   catch(int e){
      if(e==1)
         cout<<"Dequeue Doesn't Exist !!"<<endl;
      return -100000;
   }
}
int Dequeue::get_front(){
   try{
      if(front==NULL)
         throw 1;
      return front->item;
   }
   catch(int e){
      if(e==1)
         cout<<"Dequeue Doesn't Exist !!"<<endl;
      return -100000;
   }
}
Dequeue::~Dequeue(){
   while(rear){
      Delete_rear();
   }
}
void Dequeue::Delete_rear(){
   try{
      if(front==NULL)
         throw 1;
      if(front==rear)
      {
         delete front;
         front=NULL;
         rear=NULL;
      }
      else{
         Node*t=rear;
         rear=t->prev;
         rear->next=NULL;
         delete t;
      }
   }  
   catch(int e){
      if(e==1)
         cout<<"DEQUEUE Doesn't Exist !!"<<endl;
   } 
}
void Dequeue::Delete_front(){
   try{
      if(front==NULL)
         throw 1;
      if(front==rear)
      {
         delete front;
         front=NULL;
         rear=NULL;
      }
      else{
         Node*t=front->next;//2nd Node;
         while(t){
            t->index-=1;
            if(t==rear)
               break;
            t=t->next;
         }
         Node*k=front;
         front=front->next;
         delete k;

      }
   }
   catch(int e){
      if(e==1)
         cout<<"DEQUEUE Doesn't Exist !!"<<endl;
   }
}
void Dequeue::print(){
   try{
      if(front==NULL)
         throw 1;
      Node*t=front;
      cout<<"Dequeue :- ";
      while(t){
         cout<<t->item<<" ";
         if(t==rear)
            break;
         t=t->next;
      }
      cout<<endl;
   }
   catch(int e){
      if(e==1)
         cout<<"DEQUEUE Doesn't Exist !!"<<endl;
   }
}
void Dequeue::Insert_rear(int val){
   
      Node*n=new Node;
      n->item=val;

      if(rear==NULL)// both front and rear null hai
      {
         n->index=0;
         n->next=NULL;
         n->prev=NULL;
         front=n;
         rear=n;
      }
      else{
         n->index=rear->index+1;
         n->prev=rear;
         rear->next=n;
         n->next=NULL;
         rear=n;
      }
      
}
void Dequeue::Insert_front(int val){
   
      Node*n=new Node;
      n->item=val;
      n->index=0;
      n->prev=NULL;
      if(front==NULL)
      {
         front=n;
         rear=n;
         n->next=NULL;
      }
      else{
         Node*t=front;
         while(t){
            t->index+=1;
            if(t==rear)
               break;
            t=t->next;
         }
         n->next=front;
         front->prev=n;
         n->prev=NULL;
         front=n;
      }
   
}
Dequeue::Dequeue(){
   front=NULL;
   rear=NULL;
}
Dequeue::Dequeue(int val){
   Node*n=new Node;
   n->item=val;
   n->next=NULL;
   n->prev=NULL;
   n->index=0;
   front=n;
   rear=n;

}
int main()
{
   Dequeue D(5);
   D.Insert_front(2);
   D.Insert_rear(3);
   D.Insert_front(12);
   D.Insert_rear(13);
   // D.Delete_front();
   // D.Delete_rear();
   // D.Delete_rear();
   D.get_Node(3);
   D.print();
   return 0;
}