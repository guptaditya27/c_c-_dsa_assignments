#include<iostream>
using namespace std;
#define Stack_NULL 1
#define Stack_empty 2
struct Node{
    int item;
    Node*next;
};
class Stack{
    private:
        Node* stack;
        Node*top;
    public:
        Stack();
        Stack(int);
        ~Stack();
        Stack(Stack&);
        void push(int);
        void pop();
        void display();
        int get_size();
        void clear();
        

};
Stack::Stack(Stack&S){
    if(S.stack==NULL){
        stack=NULL;
        top=NULL;
    }
    else{
        stack=NULL;
        top=NULL;
        Node *t=S.stack;
        while(t){
            push(t->item);
            if(t->next==S.top)
                break;
            t=t->next;
            
        }
    }
}
Stack::~Stack(){
    while(stack){
        if(stack->next==top){
            delete stack;
            stack=NULL;
            top=NULL;
        }
        else{
            Node*t=stack->next;
            delete stack;
            stack=t;
        }
    }
}
int Stack::get_size(){
    try{
        if(stack==NULL)
            throw Stack_NULL;
        else if(top==NULL)
            throw Stack_empty;
        Node*t=stack;
        int size=0;
        while(t){
            size++;
            if(t==top)
                break;
            t=t->next;
        }
        return size;
    }
    catch(int e){
        if(e==2)
            cout<<"Stack_empty"<<endl;
        if(e==1)
            cout<<"Stack_NULL"<<endl;
        return -1000;
    }
}
void Stack::clear(){
    try{
        if(stack==NULL)
            throw Stack_NULL;
        else if(top==NULL)
            throw Stack_empty;
        while(stack){
            if(stack->next==NULL){
                delete stack;
                stack=NULL;
                top=NULL;
            }
            else{
                Node*t=stack->next;
                delete stack;
                stack=t;
            }
        }
    }
    catch(int e){
        if(e==2)
            cout<<"Stack_empty"<<endl;
        if(e==1)
            cout<<"Stack_NULL"<<endl;
    }
}
void Stack::display(){
    try{
        if(stack==NULL)
            throw Stack_NULL;
        else if(top==NULL)
            throw Stack_empty;
        Node *t=stack;
        while(t){
            cout<<t->item<<" ";
            if(t->next==NULL)
                break;
            t=t->next;
        }
        cout<<endl;

        
    }
    catch(int e){
        if(e==2)
            cout<<"Stack_empty"<<endl;
        if(e==1)
            cout<<"Stack_NULL"<<endl;
    }
}
Stack::Stack(){
    stack=NULL;
}
Stack::Stack(int val){
    Node *n=new Node;
    n->item=val;
    n->next=NULL;
    stack=n;
    top=n;
}
void Stack::push(int val){
    Node*n=new Node;
    n->item=val;
    n->next=NULL;
    if(stack==NULL){
        stack=n;
        top=n;
        
    }
    else{
        top->next=n;
        top=n;

    }
}
void Stack::pop(){
    try{
        if(stack==NULL)
            throw Stack_NULL;
        else if(top==NULL)
            throw Stack_empty;
        
        cout<<top->item<<endl;
        if(top==stack){
            delete top;
            stack=NULL;
            top=NULL;
        }
        else{
            Node*t=stack;
            while(t->next!=top)
                t=t->next;
            delete top;
            top=t;
            t->next=NULL;
        }

    }
    catch(int e){
        if(e==2){
            cout<<"Stack is Empty"<<endl;
        }
        else if(e==2)
            cout<<"Stack_NULL"<<endl;
    }
}
int main()
{
   Stack S(10);
   S.push(5);
   S.push(12);
   S.push(13);
   S.push(15);
   Stack K=S;
   K.display();
   S.pop();
   S.clear();
   S.display();
   return 0;
}
/*try{
        if(stack==NULL)
            throw Stack_NULL;
        else if(top==NULL)
            throw Stack_empty;
    }
    catch(int e){
        if(e==2)
            cout<<"Stack_empty"<<endl;
        if(e==1)
            cout<<"Stack_NULL"<<endl;
    }
*/