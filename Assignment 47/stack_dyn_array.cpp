#include<iostream>
using namespace std;
#define stack_already_exist 1
#define stack_Doesnt_exist 2
#define Stack_Creation_Failed 3
#define stack_isempty 4
class Stack{
    private:
        int *stack;
        int capacity;
        int top;

    protected:
        void Double_array();
        bool is_full();
        bool is_half();
        void Half_array();

    public:
        Stack();
        Stack(int);
        Stack(Stack&);
        void create_array(int);
        void push(int);
        void pop();
        int peek();
        void display();
        bool is_empty();
        int get_Size();


};
bool Stack::is_full(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        if(top==capacity-1)
            return 1;
        return 0;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
    }
}
bool Stack::is_half(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        if(top==(capacity-1)/2)
            return 1;
        return 0;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
    }
}
void Stack::Half_array(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        int *newptr=new int[capacity/2];
        for(int i=0;i<=top;i++){
            newptr[i]=stack[i];
        }
        delete []stack;
        stack=newptr;
        capacity/=2;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
    }
}
Stack::Stack(Stack&S){
    if(S.stack==NULL)
    {
        stack=NULL;
        capacity=0;
        top=-1;
    }
    else{
        capacity=S.capacity;
        top=S.top;
        stack=new int[S.capacity];
        for(int i=0;i<=S.top;i++){
            stack[i]=S.stack[i];
        }

    }
}
bool Stack::is_empty(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        if(top==-1)
            return 1;
        return 0;
    }
    catch(int e)
    {
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
        return 0;
    }
}
int Stack::peek(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        else if(top==-1)
            throw stack_isempty;
        return stack[top];
    }
    catch(int e){
        if(e==2){
            cout<<"stack_Doesnt_exist"<<endl;
        }
        else if(e==4)
            cout<<"stack_isempty"<<endl;
        return -1000;
    }
}
void Stack::pop(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        else if(top==-1)
            throw stack_isempty;
        cout<<stack[top]<<endl;
        top--;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist "<<endl;
        else if(e==4)
            cout<<"stack_isempty"<<endl;
    }
}
int Stack::get_Size(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        return capacity;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
        return -1000;
    }
}
void Stack::display(){
    try{
        if(stack==NULL)
            throw stack_Doesnt_exist;
        else if(top==-1)
            throw stack_isempty;
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    catch(int e){
        if(e==2)
            cout<<"stack_Doesnt_exist"<<endl;
        else if(e==4)
            cout<<"stack_isempty"<<endl;
    }
}
void Stack::Double_array(){
    int *newptr=new int[capacity*2];
    for(int i=0;i<=top;i++){
        newptr[i]=stack[i];
    }
    delete []stack;
    capacity*=2;
    stack=newptr;
}
void Stack::push(int val){
    try{
        if(stack==NULL){
            throw stack_Doesnt_exist;
        }
        else{
            if(top==capacity-1){
                Double_array();
            }
            top++;
            stack[top]=val;
        }
    }
    catch(int e){
        if(e==2){
            cout<<"stack_Doesnt_exist"<<endl;
        }
    }
}
Stack::Stack(){
    stack=NULL;
    capacity=0;
    top=-1;
}
Stack::Stack(int cap){
    if(cap>=0){
        capacity=cap;
        top=-1;
        stack=new int[capacity];
    }
    else{
       capacity=0;
       top=-1;
       stack=NULL;

    }
}
void Stack::create_array(int cap){
    try{
        if(stack!=NULL)
            throw stack_already_exist;
        if(cap>=0)
        {
            capacity=cap;
            top=-1;
            stack=new int[capacity];

        }
        else{
            throw Stack_Creation_Failed;
        }
    }
    catch(int e){
        if(e==1){
            cout<<"stack_already_exist"<<endl;
        }
        if(e==3){
            cout<<"Stack Creation Failed"<<endl;
        }
    }
}
int main()
{
   Stack S(1);
   S.push(10);
   S.push(20);
   S.push(15);
   Stack k=S;
   //cout<<S.get_Size()<<endl;
   //cout<<S.peek()<<endl;
   S.pop();
   S.pop();
   S.pop();
   //cout<<S.peek()<<endl;
   S.display();
   k.display();
   return 0;
}