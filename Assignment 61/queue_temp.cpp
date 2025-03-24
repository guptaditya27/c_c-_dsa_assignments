#include<iostream>
using namespace std;
template<class X>
class Queue{
    private:
        X *ptr;
        int capacity;
        int last;
    public:
        Queue();
        Queue(int);
        void create_Queue(int);
        void clear();
        void push(X);
        void pop();
        void curr_status();
        void print();
        //void update_capacity(int);


};
template<class X>
void Queue<X>::print(){
    try{
        if(ptr==NULL)
            throw 0;
        else if(last==capacity-1&&ptr!=NULL)
            throw 2;  
        int i=0;
        while(i<=last){
            cout<<ptr[i]<<" ";
            i++;
        }  
        cout<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Queue Doesn't Exist "<<endl;
        else if(e==2)
            cout<<"Queue Empty"<<endl;
    }
}
template<class X>
void Queue<X>::curr_status(){
    cout<<".............. Queue Current Status ................. "<<endl;
    cout<<"........Total Element's :- ............ ["<<last+1<<"]"<<endl;
    cout<<"........Total Capacity :- .............. ["<<capacity<<"]"<<endl;
    cout<<"........Is Exist :- ..................... [";
    ptr==NULL?cout<<"NULL]"<<endl:cout<<"EXist]"<<endl;

}
template<class X>
void Queue<X>::pop(){
    try{
        if(ptr==NULL)
            throw 1;
        else if(ptr!=NULL &&last==-1)
            throw 2;
        cout<<"popped "<<ptr[0]<<"Successfully"<<endl;
        int i=0;
        while(i<=last-1)
        {
            ptr[i]=ptr[i+1];
            i++;
        }
        last--;
        curr_status();
    }
    catch(int e){
        if(e==1){
            cout<<"pop Operation Failed < Queue Doesn't Exist>"<<endl;
        }
        else if(e==2)
            cout<<"pop operation failed <Empty Queue>"<<endl;
    }
}
template<class X>
void Queue<X>::push(X a){
    try{
        if(ptr==NULL)
            throw 1;
        else if(last==capacity-1)
            throw 2;
        last++;
        ptr[last]=a;

    }
    catch(int e){
        if(e==1)
            cout<<"Push Operation Failed <Doesn't Exist>"<<endl;
        if(e==2)
            cout<<"Push operation Failed <Overflow>"<<endl;
    }
}
template<class X>
void Queue<X>::clear(){
    if(ptr){
        delete []ptr;
       capacity=0;
       last=-1;
       ptr=NULL; 
    }
}
/*template<class X>
void Queue<X>::update_capacity(int cap){
    try{
        if(ptr==NULL)
            throw 1;
        else if(cap==capacity)
            throw 2;
        else if(cap<=0){
            throw 3;
        }
        X *n=new X[cap];
        int i=0;
        int j=
        while(i!=last+1){
            n[i]=ptr[i];
            i++;
        }
        delete []ptr;

    }
    catch(int e){
        if(e==1)
            cout<<"Queue Updation Failed <Doesn't Exist>"<<endl;
        else if(e==2){
            cout<<"Queue Updation Failed <Same capacity>"<<endl;    
        }
        else if(e==3)
            cout<<"Queue Updation Failed <Invalid Paramter>"<<endl;
    }
}*/
template<class X>
Queue<X>::Queue(){
    ptr=NULL;
    capacity=0;
    last=-1;
}
template<class X>
Queue<X>::Queue(int cap){
    if(cap<0){
        capacity=0;
        ptr=NULL;

    }
    else{
        capacity=cap;
        ptr=new X[capacity];
    }
    last=-1;
}
template<class X>
void Queue<X>::create_Queue(int cap){
    
    try{
        if(cap<=0)
            throw 1;

        if(ptr==NULL){
            capacity=cap;
            ptr=new X[capacity];
        }
        else{
            cout<<"Queue Creation Failed <ALREADY EXIST>"<<endl;

        }
    }
    catch(int e){
        if(e==1)
            cout<<"Queue Creation Failed <Invalid Paramter>"<<endl;
    }
}
int main()
{
   Queue <string>Q(5);
   Q.push("rinky");
   Q.push("Rahul");
   Q.print();
   //Q.clear();
   Q.pop();
    return 0;
}