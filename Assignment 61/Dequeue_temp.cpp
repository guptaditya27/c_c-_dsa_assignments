#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>
#include<typeinfo>
template<class X>
struct Node{
   Node<X> *next;
   X val;
   int index;
};
template<class X>
class Dequeue{
   private:
      Node<X> *start;
      Node<X> *end;
      static int No_Nodes;
   protected:
      Node<X>* get_pos(X);
   public:
      Dequeue();
      ~Dequeue();
      void insert_front(X);
      void insert_Last(X);
      void insert_after(X,X);
      void insert_at(int ind,X);
      ///void update(int ,X);
      //void update(X,X);
      //void update(X,int,X);
      //void insert_at(X,int,X);
      void delete_first();
      void delete_last();
      //void delete_node(int ind);
      //void delete_node(X val,int ind);
      X& operator[](int);
      void print();
      //void reverse();
      void clear();
      void Info();


};
template<class X>
void Dequeue<X>::insert_at(int index,X a){
   try{
      if(index<0||index>No_Nodes+1)
         throw 2;
      Node<X> *n=new Node;// New node to be inserted .
      n->val=a;
      n->index=index;
      Node<X>*t=start;// pointer to iterate.
      
      if(index==0){

      }

   }
   catch(int e){
      if(e==2)
         cout<<"Invalid Parameter Encountered !!"<<endl;
   }
}
template<class X>
X& Dequeue<X>::operator[](int index){
   X b=X();
   X &a=b;
   try{
      if(start==NULL)
         throw 1;
      if(index<=0||index>No_Nodes)
         throw 2;
      Node<X>*t=start;
      while(t){
         if(t->index==index)
            return t->val;
         t=t->next;
         
      }
      return a;
      
      
   }
   catch(int e){
      if(e==1)
         cout<<"Dequeue Doesn't Exist !!"<<endl;
      else if(e==2)
         cout<<"Invalid parameter's !!"<<endl;
      return a;
   }
} 
template<class X>
int Dequeue<X>::No_Nodes;
template<class X>
void Dequeue<X>::Info(){
   cout<<"Datastr :- "<<"Dequeue"<<endl;
   cout<<"Node Type :- ";
   if(typeid(X)==typeid(string))
      cout<<"string"<<endl;
   else if(typeid(X)==typeid(int))
      cout<<"Integer"<<endl;
   else if(typeid(X)==typeid(float))
      cout<<"Float"<<endl;
   else{
      cout<<typeid(X).name()<<endl;
   }
   cout<<"NO of Nodes :- "<<No_Nodes<<endl;
}
template<class X>
void Dequeue<X>::clear(){
   try{
      if(start==NULL)
         throw 1;
      Node<X> *t=start;
      while(start){
         delete_first();
      }
      No_Nodes=0;

   }
   catch(int e){
      if(e==1)
         cout<<"List iS Empty !!"<<endl;  
   }
}
template<class X>
Dequeue<X>::Dequeue(){
   start=NULL;
   end=NULL;
   No_Nodes=0;

}
template<class X>
void Dequeue<X>::insert_front(X val){
   Node<X> *n=new Node<X>;
   n->val=val;
   n->next=NULL;
   n->index=1;
   if(start==NULL){
      start=n;
      n->next=NULL;
      end=n;
   }
   else{
      Node<X> *t=start;
      while(t){
         t->index++;
         if(t==end)
            break;
         t=t->next;
      }
      n->next=start;
      start=n;
   }
   No_Nodes++;
}
template<class X>
void Dequeue<X>::insert_Last(X val){
   Node<X> *n=new Node<X>;
   n->val=val;
   n->next=NULL;
   if(start==NULL){
      start=n;
      end=n;
   }
   else{
      end->next=n;
      end=n;
   }
   No_Nodes++;
   n->index=No_Nodes;
}
template<class X>
Node<X>* Dequeue<X>::get_pos(X val){
   
   Node<X> *t=start;
   while(t){
      
      if(t->val==val)
         return t;
      if(t->next==NULL)
         break;
      t=t->next;
   }

   return t;

}
template<class X>
void Dequeue<X>::insert_after(X val,X ins){
   Node<X> *t=get_pos(val);
   Node<X>*n=new Node<X>;
   n->val=ins;
   n->index=t->index;
   if(start==t){
      n->next=start->next;
      start->next=n;
   }
   else if(t==end){
      end->next=t;
      t->next=NULL;
      end=t;
   }
   else{
      n->next=t->next;
      t->next=n;
   }
   No_Nodes++;
   t=t->next;
   while(t){
      t->index++;
      if(t->next=end)
         break;
      t=t->next;
   }

}
template<class X>
void Dequeue<X>::delete_first(){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*t=start;
      if(start==end){
         delete  t;
         start=NULL;
         end=NULL;
      }
      else{
         start=start->next;
         delete t;
      }
      No_Nodes--;
      Node<X> *p=start;
      while(p){
         p->index--;
         if(p->next==end)
            break;
         p=p->next;
      }


   }
   catch(int e){
      if(e==1)
         cout<<"List Doesn't Exist !!"<<endl;
   }
}
template<class X>
void Dequeue<X>::delete_last(){
   try{
      if(end==NULL)
         throw 1;
      Node<X> *t=end;
      if(start==end){
         delete t;
         start=NULL;
         end=NULL;
      }
      else{
         Node<X> *x=start;
         while(x->next!=t){
            x=x->next;
         }
         x->next=NULL;
         end=x;
         delete t;
      }
      No_Nodes--;
      
   }
   catch(int e){
      if(e==1)
         cout<<"List Doesn't Exist !!"<<endl;
   }
}
/*template<class X>
void Dequeue<X>::reverse(){
   try{
      if(start==NULL)
         throw 1;
      Node<X> *t=start;
      Node<X> *p=end;

   }
   catch(int e){
      if(e==1)
         cout<<"List is Empty !!"<<endl;
   }
}*/
template<class X>
void Dequeue<X>::print(){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*t=start;
      if(sizeof(t->val)==1){
         while(t){
            cout<<t->val;
            if(t->next==NULL)
               break;
            t=t->next;
         }
         cout<<endl;
      }
      else{
         while(t){
            cout<<t->val<<" ";
            if(t->next==NULL)
               break;
            t=t->next;
         }
      }
   }
   catch(int e){
      if(e==1)
         cout<<"List Doesn't Exist !!"<<endl;
   }
}
template<class X>
Dequeue<X>::~Dequeue(){
   
   Node<X>*t=start;
   while(start->next!=NULL)
   {
      delete_first();
   }
   delete start;
   start=NULL;
}
int main()
{
   Dequeue<string> D;
   D.insert_front("Aditya");
   D.insert_Last("Rahul");
   D.Info();
   cout<<D[2]<<endl;
   D.print();
   return 0;
}