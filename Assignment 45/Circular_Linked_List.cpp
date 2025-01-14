#include<iostream>
using namespace std;
#define  Negative_Value_Encounterd 1
#define  Array_Doesnt_Exist 2
#define  Empty_Reference_provided 3
#define  Invalid_Index 4
// we are creating conventional circular linked list here
// last->next ==start// 1st node addd;
// let se how traveersing works in that case .
struct Node{
    int item;
    Node*next;

};
class Circular_Linked_List{
    
    private:
        Node*start;
    protected:
        Node* create_Node(int =0);
    public:
        Circular_Linked_List();
        Circular_Linked_List(int);
        ~Circular_Linked_List();
        Circular_Linked_List(Circular_Linked_List&);
        Circular_Linked_List operator=(Circular_Linked_List&);
        void Delete_First();
        void Delete_Last();
        void Insert_First(int);
        void Insert_Last(int);
        void print();
        void clear();
        int count();

};
Node* Circular_Linked_List::create_Node(int val){
    Node*N=new Node;
    N->item=val;
    N->next=NULL;
    return N;

}
int Circular_Linked_List::count(){
    int n=0;
    if(start==NULL)
        return n;
    else{
        Node *t=start;
        while(t->next!=start)
        {
            n++;
            t=t->next;
        }
        n++;
        return n;
    }
    

}
void Circular_Linked_List::clear(){
    Node *t=start;
    if(t){
        while(t)
            Delete_First();
    }
}
Circular_Linked_List Circular_Linked_List::operator=(Circular_Linked_List&C){
    if(start!=NULL)
        clear();
    start=NULL;
    Node*t=C.start;
    while(t)
    {
        Insert_Last(t->item);
        if(t->next==C.start)
            break;
        t=t->next;
    }
    
    
}
Circular_Linked_List::Circular_Linked_List(Circular_Linked_List&C){
    if(C.start==NULL)
    {
        start=NULL;
    }
    else{
        start=NULL;
        Node*t=C.start;
        while(t)
        {
            Insert_Last(t->item);
            if(t->next==C.start)
                break;
            t=t->next;
        }
    }
}
Circular_Linked_List::~Circular_Linked_List(){
    while(start){
        Delete_First();
    }
}
void Circular_Linked_List::Delete_Last(){
    try{
        if(start==NULL)
            throw Array_Doesnt_Exist;
        Node*t=start;
        while(t->next->next!=start)
            t=t->next;
        if(start->next==start)
        {
            delete start;
            start=NULL;
        }
        else{
            delete t->next;
            t->next=start;
        }
        
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
void Circular_Linked_List::Delete_First(){
    try{
        if(start==NULL)
            throw Array_Doesnt_Exist;
        Node*t=start;
        if(t->next==start){
            delete t;
            start=NULL;
        }
        else{
            
            while(t->next!=start){
                t=t->next;
            }
            Node *p=start;
            start=start->next;
            t->next=start;
            delete p;
        }

    }
    catch(int e){
        if(e==2)
            cout<<""<<endl;
    }
}
void Circular_Linked_List::Insert_Last(int val){
    Node* n =new Node;
    n->item=val;
    if(start==NULL){
        start=n;
        start->next=start;
    }
    else{
        Node*t=start;
        while(t){
            if(t->next==start)
                break;
            
            t=t->next;
        }
        n->next=start;
        t->next=n;

    }
}
Circular_Linked_List::Circular_Linked_List(){
    start=NULL;

}
Circular_Linked_List::Circular_Linked_List(int val){
    Node*n=new Node;
    n->item=val;
    start=n;
    n->next=start;

}
void Circular_Linked_List::print(){
    try{
        if(start==NULL)
            throw Array_Doesnt_Exist;
        Node*t=start;
        while(t){
            cout<<t->item<<" ";
            if(t->next==start)
                break;
            t=t->next;
        }
    }
    catch(int e){
        if(e==2){
            cout<<"Array_Doesnt_Exist"<<endl;
        }
    }
}
void Circular_Linked_List::Insert_First(int val){
    
    Node *n=new Node;
    n->item=val;

    if(start==NULL)
    {
        
       start=n;
       n->next=start; 
    }
    else{
        Node*t=start;
        while(t)
        {
            if(t->next==start)
                break;
        }
        t->next=n;
        n->next=start;
        start=n; 
    }
}
int main()
{
   Circular_Linked_List c(5);
   c.Insert_First(15);
   c.Insert_Last(25);
   c.Insert_Last(21);
   c.Insert_Last(35);
   c.Insert_Last(85);

   //c.Delete_Node(21);
   Circular_Linked_List D=c;
   cout<<D.count()<<endl;
   D.print();

   return 0;
}