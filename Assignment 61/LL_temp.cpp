#include<iostream>
using namespace std;
#include<stdio.h>
template<class X>
struct Node{
   X item;
   Node*next;
   int index;


};
template<class X>
class LL{
   private:
      Node<X> *start;
   protected:
      Node<X>* find(X);
   public:
      LL();
      LL(X);
      LL(LL&);
      ~LL();
      void append(X);
      void print();
      void clear();
      void insert_first(X);
      
      void delete_first();
      void insert_after(X,X);
      void delete_last();
      X peek();


};
template<class X>
LL<X>::~LL(){
   if(start){
      while(start){
         delete_first();
      }
   }
}
template<class X>
void LL<X>::insert_after(X val1,X val){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*node=find(val1);
      if(node==NULL)
         throw 2;
      Node<X>*n=new Node<X>;
      n->item=val;
      n->next=node->next;
      node->next=n;

   }
   catch(int e){
      if(e==1){
         cout<<"LIst Doesn't Exist !!";
      }
      else if (e==2)
      {
         cout<<"Node With Value "<<val1<<"Not Found !!"<<endl;
      }
      
   }
}
template<class X>
Node<X>* LL<X>::find(X val){
   Node<X>*t=start;
   while(t){
      if(t->item==val)
         return t;
      t=t->next;
   }
   return NULL;
}
template<class X>
X LL<X>::peek(){
      if(start==NULL)
         return -1;
      Node<X>*t=start;
      while(t->next!=NULL)
         t=t->next;
      return t->item; 
}
template<class X>
void LL<X>::delete_last(){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*t=start;
      while(t->next->next!=NULL)
         t=t->next;
      Node<X>*last=t->next;
      t->next=NULL;
      delete last;      
   }
   catch(int e){
      if(e==1)
         cout<<"List doesn't Exist !!"<<endl;
   }
}
template<class X>
void LL<X>::delete_first(){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*t=start;
      start=start->next;
      delete t;

   }
   catch(int e){
      if(e==1)
         cout<<"List doesn't Exist !!"<<endl;
   }
}
template<class X>
LL<X>::LL(LL&L){
   start=NULL;
   if(L.start==NULL)
      start=NULL;
   else{
      Node <X>*t=L.start;
      while(t){
         this->append(t->item);
         if(t->next==NULL)
            break;
         t=t->next;
      }
   }
}
template<class X>
void LL<X>::clear(){
   if(start){
      while(start){
         Node<X>*t=start;
         start=t->next;
         delete t;
         
      }
   }
}
template<class X>
void LL<X>::insert_first(X a){
   Node <X>*n=new Node<X>;
   n->item=a;
   Node<X>*t=start;
   n->next=t;
   start=n;



}
template<class X>
void LL<X>::print(){
   try{
      if(start==NULL)
         throw 1;
      Node<X>*t=start;
      while(t){
         
         cout<<"["<<t->item<<"] -->";
         if(t->next==NULL)
            break;
         t=t->next;
      }
      cout<<"[NULL]"<<endl;
   }
   catch(int e){
      if(e==1)
         cout<<"List Doesn't Exist !!"<<endl;
   }
}
template<class X>
void LL<X>::append(X a){
   Node<X> *n=new Node<X>;
   n->item=a;
   n->next=NULL;
   if(start==NULL)
      start=n;
   else{
      Node<X> *t=start;
      while(t->next!=NULL)
         t=t->next;
      t->next=n;
      
   }
}
template<class X>
LL<X>::LL(){
   start=NULL;
}
template<class X>
LL<X>::LL(X a){
   Node<X>*n=new Node<X>;
   n->item=a;
   n->next=NULL;
   start=n;



}
int main()
{
   LL<int> L('A');
   L.insert_first(11);
   L.append(66);
   L.append(93);
   LL<int>K=L;
   K.print();
   K.insert_after(66,52);
   L.clear();
   K.print();
   //L.print(); 
   return 0;
}