#include<iostream>
using namespace std;
#include<stdio.h>
struct Node{
    int item;
    Node*next;

};
#define  Negative_Value_Encounterd 1
#define  Array_Doesnt_Exist 2
#define  Empty_Reference_provided 3
#define  Invalid_Index 4
class Circular_Linked_List{
    
    private:
        Node*last;
    public:
        Circular_Linked_List();
        Circular_Linked_List(int);
        ~Circular_Linked_List();
        //Circular_Linked_List(Circular_Linked_List&);
        void Delete_First();
        void Delete_Last();
        void Insert_First(int);
        void Insert_Last(int);
        void Display();
        void clear();
};
void Circular_Linked_List::Delete_Last(){
    try{
        if(last==NULL)
            throw Array_Doesnt_Exist;
        Node *first=last->next;
        if(last->next==last){
            delete last;
            last=NULL;
        }
        else{
            Node*r=last->next;
            while(r->next!=last){
                r=r->next;
            }
            r->next=last->next;
            delete last;
            last=r;

        }
        
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
void Circular_Linked_List::Insert_Last(int val){
    
    Node *n=new Node;
    n->item=val;
    if(last==NULL)
    {
        last=n;
        n->next=last;
    }
    else{
        Node*first=last->next;
        n->next=last->next;
        last->next=n;
        last=n;

        
    }
}
void Circular_Linked_List::Delete_First(){
    try{
        if(last==NULL)
            throw Array_Doesnt_Exist;
        Node* curr=last->next->next;
        if(last->next==last){// only 1 node
            delete last;
            last=NULL;
        }
        else{
            delete last->next;
            last->next=curr;
        }
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
void Circular_Linked_List::clear(){
    if(last){
        
        while(last){
            if(last->next==last){
                delete last;
                last=NULL;
                break;
            }
            
            Node *first=last->next;
            Node*curr=first->next;
            last->next=curr;
            delete first;
            
        }
    }
    

}
Circular_Linked_List::~Circular_Linked_List(){
    Node*t=last->next;// first Element.
    while(last){
        if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else{
            Node* curr=t->next;
            last->next=curr;
            delete t;
        }
    }


}
void Circular_Linked_List::Display() {
    try {
        if (last == NULL) {
            throw Array_Doesnt_Exist;
        }
        
        Node* t = last->next;
        Node* first = last->next;

        cout << "Displaying list:" << endl;

        while (t) {
            cout << t->item << " ";  // Print the node's value
            if (t->next == first) {
                break;  // Exit once we circle back to the first node
            }
            t = t->next;
        }
        cout << endl;
    }
    catch (int e) {
        if (e == Array_Doesnt_Exist)
            cout << "Array doesn't exist" << endl;
    }
}
void Circular_Linked_List::Insert_First(int val){
    
    Node*n=new Node;
    n->item=val;

    if(last==NULL)
    {
        last=n;
        n->next=last;
    }
    else{
        n->next=last->next;
        last->next=n;
    }
}
Circular_Linked_List::Circular_Linked_List(){
    last=NULL;
}
Circular_Linked_List::Circular_Linked_List(int val){
    Node*n=new Node;
    n->item=val;
    last=n;
    n->next=last;
}
int main()
{
   Circular_Linked_List C;
   C.Insert_First(10);
   C.Insert_First(15);
   C.Insert_First(141);
   C.Insert_First(21);
   C.Insert_Last(11);
    C.Display();
   C.Delete_First();
   C.Display();
   C.Delete_Last();
   Circular_Linked_List D=C;
   D.Display();
   //C.clear();
   
   return 0;
}