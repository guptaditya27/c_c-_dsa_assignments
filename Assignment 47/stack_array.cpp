#include<iostream>
using namespace std;
#include<stdio.h>
class Stack{
    private:
        int*stack;
        int capacity;
        int top;
    
    public:
        Stack();
        Stack(int);
        ~Stack();
        Stack(Stack&);
        void append(int);
        void insert(int[],int);
        void insert(Stack&);
        void count();
        void pop();
        void clear();
        void print();
        void create_stack(int);
        void current_status();



};
void Stack::pop(){
    if(top==-1||stack==NULL)
        cout<<"Stack Doesn't Exist !!"<<endl;
    else{
        cout<<stack[top]<<endl;
        top--;
        if(top==-1)
            clear();
    }
}
void Stack::current_status(){
    cout<<"Stack :- ";
    if(stack==NULL)
        cout<<"Doesn't Exist !!"<<endl;
    else{
        cout<<"Exist !!"<<endl;
    }
    cout<<"Capacity :- "<<capacity<<endl;
    cout<<"Top Index :- "<<top<<endl;
}
void Stack::create_stack(int cap){
    if(cap<=0)
        cout<<"Stack Doesn't created !! "<<"INVALID SIZE !!"<<endl;
    else{
        if(stack!=NULL){
           cout<<"Stack ALready Exist !!"<<endl;
           current_status();
           char k;
           cout<<"Do YOu Want To create New Y/N ";
           cin>>k;
           if(k=='y'||k=='Y')
           {
            clear();
            capacity=cap;
            top=-1;
            stack=new int[capacity];
            cout<<"-------Stack Created Successfully -----"<<endl;
            current_status();
           }
           else if(k=='N'||k=='n')
           {
            current_status();
            cout<<"Exit...."<<endl;
           }
           else{
            cout<<"Invalid Input !!"<<endl;
           }

        }
        else{
            capacity=cap;
            top=-1;
            stack=new int[capacity];
        }

    }
}
void Stack::clear(){
    if(stack!=NULL){
        delete[]stack;
        stack=NULL;
        top=-1;
        capacity=0;
    }
}
void Stack::print(){
    try{
        if(stack==NULL)
            throw 1;
        for(int i=0;i<=top;i++)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Doesn't Exist !!"<<endl;
    }
}
void Stack::insert(Stack&S){
    if(S.stack==NULL)
        cout<<"Empty Reference "<<endl;
    if(stack==NULL&&S.stack!=NULL)
    {
        capacity=S.capacity;
        top=S.top;
        stack=new int[capacity];
        for(int i=0;i<=top;i++)
            stack[i]=S.stack[i];
    }
    else{
        int i=0;
        while(top!=capacity){
            if(top==capacity-1){
                cout<<"Stack overflow"<<endl;
                break;
            }
            top++;
            stack[top]=S.stack[i];
            if(i==S.top)
                break;
            i++;
        }
        
    }
}
void Stack::insert(int arr[],int size){
    try{
        if(size<=0)
            throw 2;
        if(stack==NULL)
        {
            capacity=size;
            top=size-1;
            stack=new int[capacity];
            for(int i=0;i<=size-1;i++)
                stack[i]=arr[i];
        }
        else{
            int i=0;
            while(top!=capacity){
                
                if(top==capacity-1){
                    throw 1;
                    break;
                }
                top++;
                stack[top]=arr[i];
                if(i==size-1)
                    break;
                i++;
            }
        }
        
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Overflow !!"<<endl;
        else if(e==2)
            cout<<"Invalid Size !!"<<endl;
    }
    
    
}
void Stack::append(int val){
    try{
        if(stack==NULL)
            throw 1;
        else if(top==capacity-1)
            throw 2;
        top++;
        stack[top]=val;
        
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Stack Overflow !!"<<endl;
            
    }
}
Stack::Stack(Stack&S){
    if(S.stack==NULL)
    {
        capacity=0;
        top=-1;
        stack=NULL;

    }
    else{
        capacity=S.capacity;
        top=S.top;
        stack=new int [capacity];
        for(int i=0;i<=top;i++){
            stack[i]=S.stack[i];
        }
    }
}
Stack::~Stack(){
    delete []stack;
    stack=NULL;
}
Stack::Stack(int cap){
    if(cap<=0)
    {
        stack=NULL;
        capacity=0;
        top=-1;
        cout<<"Stack Not Created !!"<<endl;
    }
    else{
        capacity=cap;
        top=-1;
        stack=new int[capacity];
    }
}
Stack::Stack(){
    capacity=0;
    top=-1;
    stack=NULL;

}
int main()
{
   Stack S,p(2);
   p.append(10);
   p.append(15);
   int arr[]={10,12,13,54};
   S.insert(p);
   S.create_stack(5);
   S.pop();
   S.pop();
   S.pop();
   //S.current_status();
   S.print();
   return 0;
}