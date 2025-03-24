#include<iostream>
using namespace std;
#include<stdio.h>
template<class X>
class Stack{
    private:
        int capacity;
        int top;
        X *ptr;
    protected:
        void Double();
        void Half();
    public:
        Stack();
        Stack(int);
        ~Stack();
        Stack(Stack &);
        void create_stack(int);
        void push(X);
        void pop();
        void Delete();
        void print();
        int get_capacity();
        void clear();
        X peek();


};
template<class X>
void Stack<X>::clear(){
    if(ptr){
        delete[]ptr;
        ptr=NULL;
        capacity=0;
        top=-1;
    }
}
template<class X>
Stack<X>::Stack(Stack& S){
    int i=0;
    top=S.top;
    capacity=S.capacity;
    ptr=NULL;
    create_stack(capacity);
    for(i=0;i<=top;i++){
        ptr[i]=S.ptr[i];
    }

}
template<class X>
Stack<X>::~Stack(){
    delete []ptr;
    ptr=NULL;
}
template<class X>
void Stack<X>::Delete(){
    try{
        if(ptr==NULL)
            throw 2;
        else if(top==-1)
            throw 1;
        if(top==capacity/2)
            Half();
        if(top==0)
        {
            //cout<<"["<<ptr[top]<<"] deleted Successfully !!"<<endl;
            delete []ptr;
            ptr=NULL;
            capacity=0;
            top--;
        }
        else{
            //cout<<"["<<ptr[top]<<"] deleted Successfully !!"<<endl;
            
            top--;
        }
        
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Underflow !!"<<endl;
        if(e==2)
            cout<<"Stack Doesn't Exist !!"<<endl;
    }
}
template<class X>
void Stack<X>::pop(){
    try{
        if(ptr==NULL)
            throw 2;
        else if(top==-1)
            throw 1;
        if(top==capacity/2)
            Half();
        if(top==0)
        {
            cout<<"["<<ptr[top]<<"] deleted Successfully !!"<<endl;
            delete []ptr;
            ptr=NULL;
            capacity=0;
            top--;
        }
        else{
            cout<<"["<<ptr[top]<<"] deleted Successfully !!"<<endl;
            
            top--;
        }
        
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Underflow !!"<<endl;
        if(e==2)
            cout<<"Stack Doesn't Exist !!"<<endl;
    }
}
template<class X>
void Stack<X>::Half(){
    X*T=new X [capacity/2];
    for(int i=0;i<=top;i++)
    {
        T[i]=ptr[i];
    }
    capacity/=2;
    delete []ptr;
    ptr=T;
}
template<class X>
X Stack<X>::peek(){
    try{
        if(ptr==NULL)
            throw 1;
        return ptr[top];
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Doesn't Exist !!"<<endl;
        return -1000000;
    }
}
template<class X>
int Stack<X>::get_capacity(){
    return capacity;
}
template<class X>
void Stack<X>::Double(){
    X *T=new X[capacity*2];
    for(int i=0;i<=top;i++){
        T[i]=ptr[i];
    }
    delete []ptr;
    capacity*=2;
    ptr=T;
}
template<class X>
void Stack<X>::create_stack(int cap){
    try{
        if(cap<0)
            throw 1;
        if(ptr==NULL){
            capacity=cap;
            ptr=new X[capacity];
            cout<<"Stack with capacity "<<capacity<<" created Successfully !!"<<endl;
        }
        else{
            cout<<"Stack Creation Unsuccessfull !!"<<endl;
        }


    }
    catch(int e){
        if(e==1)
            cout<<"Invalid Parameter's !!"<<endl;
        
    }
}
template<class X>
void Stack<X>::print(){
    
    try{
        if(ptr==NULL)
            throw 1;
        int k=top;
        while(k){
            cout<<"|  "<<ptr[k]<<"  |"<<endl;
            k--;
        }
        cout<<"|  "<<ptr[0]<<"  |"<<endl;
        cout<<"-------"<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Stack Doesn't Exist !!"<<endl;
    }
}
template<class X>
void Stack<X>::push(X a){
    if(top==capacity-1)
        Double();
    top++;
    ptr[top]=a;
}
template<class X>
Stack<X>::Stack(){
    top=-1;
    capacity=0;
    ptr=NULL;

}
template<class X>
Stack<X>::Stack(int cap){
   top=-1;
   if(cap>0)
   {
    capacity=cap;
    ptr=new X [capacity];
   }
   else{
    capacity=0;
    ptr=NULL;
   }
}
int main()
{
   Stack <char>S;
   S.create_stack(3);
   S.push('A');
   
   
   S.pop();
   S.push('D');

   S.push('I');
   S.pop();
   S.pop();
   //cout<<S.get_capacity();
   

   S.push('T');
   //cout<<S.get_capacity()<<endl;
   S.push('Y');
   S.push('G');
   S.push('U');
   //cout<<S.get_capacity()<<endl;

   S.push('P');
   S.push('T');
   S.push('A');
   Stack <char>T=S;
   T.print();
   S.print();

   
    return 0;
}