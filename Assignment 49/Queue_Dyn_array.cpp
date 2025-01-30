#include<iostream>
using namespace std;
#include<stdio.h>
#define Inappropriate_Input 1
#define Array_Not_Found 2
#define NULL_Reference 3

class Queue{
    private:
        int *queue;
        int capacity;
        int last;

    protected:
        void Double();
        void Half();
        void Leftshift(int=1);
    public:
        Queue();
        Queue(int);
        ~Queue();
        void Insert(int);
        void Insert(int*,int);
        void createqueue(int);
        void current_status();
        void Print();
        void Reverse();
        void clear();
        void sort(int=0);
        void pop();
        void del();



};
void Queue::Leftshift(int term){
    int t=term;
    while(t>0){
        for(int i=0;i<=last-1;i++)
        {
            queue[i]=queue[i+1];
        }
        t--;
    }
}
void Queue::del(){
    try{
        if(queue==NULL)
            throw 2;
        if(last==0)
            clear();
        else{
            Leftshift();
            last--;
            if(last<capacity/2)
                Half();
        }

    
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array doedn't Exist"<<endl;
        
    }
}
void Queue::pop(){
    try{
        if(queue==NULL)
            throw 2;
        if(last==0){
            cout<<"popped :-"<<queue[0]<<endl;
            last--;
            current_status();
            clear();
        }
        else{
            cout<<"popped :-"<<queue[0]<<endl;
            Leftshift();
            last--;
            if(last==capacity/2)
                Half();
            current_status();
        }
    
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array doesn't Exist"<<endl;
        
    }
}
void Queue::sort(int desc) {
    try {
        if (queue == NULL)
            throw 2;
        
        if (desc) {
            for (int i = 0; i < last; i++) {
                int swap = 0;
                for (int j = 0; j < last - i; j++) {
                    if (queue[j] < queue[j + 1]) {
                        swap = 1;
                        int k = queue[j + 1];
                        queue[j + 1] = queue[j];
                        queue[j] = k;
                    }
                }
                if (swap == 0)
                    break;
            }
        } else {
            for (int i = 0; i < last; i++) {
                int swap = 0;
                for (int j = 0; j < last - i; j++) {
                    if (queue[j] > queue[j + 1]) {
                        swap = 1;
                        int k = queue[j + 1];
                        queue[j + 1] = queue[j];
                        queue[j] = k;
                    }
                }
                if (swap == 0)
                    break;
            }
        }
    } catch (int e) {
        if (e == 1)
            cout << "Inappropriate Index Value" << endl;
        else if (e == 2)
            cout << "Queue doesn't Exist" << endl;
    }
}
void Queue::Insert(int*ptr,int size){
    try{
        if(size<=0)
            throw 1;
        else if(ptr==NULL)
            throw 3;
        if(queue==NULL)
            createqueue(size);
        for(int i=0;i<=size-1;i++)
            Insert(ptr[i]);
    
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate size Value "<<endl;
        else if(e==2)
            cout<<"Array doedn't Exist"<<endl;
        else if(e==3)
            cout<<"NULL Reference Provided !!"<<endl;
        
    }
}
void Queue::clear(){
    if(queue!=NULL)
    {
        delete[]queue;
        queue=NULL;
        last=-1;
        capacity=0;
    }
}
void Queue::Reverse(){
    try{
        if(queue==NULL)
            throw 2;
        for(int i=0, j=last;i<=last/2;i++,j--){
            int k=queue[j];
            queue[j]=queue[i];
            queue[i]=k;
        }
        
        
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array doedn't Exist"<<endl;
    
    }
}
void Queue::Print(){
   try{
        if(queue==NULL)
            throw 2;
        cout<<"QUEUE :- ";
        for(int i=0;i<=last;i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array doesn't Exist"<<endl;
    
    } 
}
void Queue::current_status(){
    cout<<"Queue:- ";
    if(queue!=NULL)
        cout<<"Is Exist"<<endl;
    else{
        cout<<"Doesn't Exist"<<endl;
    }
    cout<<"Capacity :-"<<capacity<<endl;
    cout<<"Last Index :- "<<last<<endl;
    cout<<"Total Elements :- "<<last+1<<endl;
}
void Queue::createqueue(int cap){
    try{
        if(cap<=0)
            throw 1;
        else if(queue!=NULL)
            throw 2;
        
        if(queue==NULL){
            capacity=cap;
            queue=new int[capacity];
            capacity=0;
            last=-1;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array Already Exist"<<endl;
        
    }
}
void Queue::Half(){
    int*newqueue;
    newqueue=new int[(int)capacity/2];
    for(int i=0;i<=last;i++){
        newqueue[i]=queue[i];
    }
    delete []queue;
    queue=newqueue;
    capacity/=2;


}
void Queue::Double(){
    int *newqueue;
    newqueue=new int[capacity*2];
    capacity*=2;
    for(int i=0;i<=last;i++)
        newqueue[i]=queue[i];
    delete []queue;
    queue=newqueue;
    
}
void Queue::Insert(int val){
    try{
        if(queue==NULL)
            throw 2;
        if(last==capacity-1)
            Double();
        last++;

        queue[last]=val;
        
    
    }
    catch(int e){
        if(e==1)
            cout<<"Inapproriate Index Value "<<endl;
        else if(e==2)
            cout<<"Array doesn't Exist"<<endl;
    
    }
}
Queue::~Queue(){
    delete []queue;
    capacity=0;
    last=-1;
}
Queue::Queue(){
    queue=NULL;
    capacity=0;
    last=-1;
}
Queue::Queue(int cap){
try{
    if(cap<=0)
        throw 1;
    else if(queue=NULL)
        throw 2;
    capacity=cap;
    queue=new int[capacity];
    last=-1;
    
}
catch(int e){
    if(e==1)
        cout<<"Inapproriate Input Value "<<endl;
    else if(e==2)
        cout<<"Array doedn't Exist"<<endl;
    
}
}
int main()
{
   Queue Q(5);
   Q.Insert(10);
   Q.Insert(11);
   Q.Insert(12);
   Q.Insert(9);
   Q.Insert(5);
   //Q.current_status();
   //Q.Insert(17);
   //Q.current_status();
   //Q.Print();
   //Q.Reverse();
   //int arr[5]={45,36,63,87,81};
   //Q.Insert(arr,5);
   //Q.Print();
   //Q.current_status();
//    Q.sort(2);
   Q.Print();
    Q.del();
    Q.pop();
    Q.Print();
   return 0;
}
/*try{
    if(queue==NULL)
        throw 2;
    
}
catch(int e){
    if(e==1)
        cout<<"Inapproriate Index Value "<<endl;
    else if(e==2)
        cout<<"Array doedn't Exist"<<endl;
    
}*/