#include<iostream>
using namespace std;
#include<stdio.h>
#include<typeinfo>
#include<string>
template <class X>
class Array{
    private:
        int lastindex;
        int capacity;
        X *ptr;
    public:
        Array();//
        Array(int);//
        ~Array();//
        Array(Array<X>&);//
        void append(X a);//
        void print();//
        void create_array(int);//
        bool is_full();//
        bool is_empty();//
        void get_item(int=0);//
        void clear();//
        void input(X[],int);//
        X& operator[](int);//
        int get_size();//
        int get_lastindex();//
        void sort(int =1);//
        void update(int,int=0);//
        X& front();//
        void extend(Array<X>&);//
        void extend(X*,int);//
        void search(X,bool=0);//
        
        
        void status();//
        void copy(Array<X>&);//
        

};
template<class X>
void Array<X>::search(X val,bool repn){
    try{
        if(ptr==NULL)
            throw 1;
        if(repn){
            bool is_found=0;
            cout<<"value "<<val<<" Exist at Index :-";
            for(int i=0;i<=lastindex;i++){
                if(ptr[i]==val){
                    cout<<i<<" ";
                    is_found=1;
                }
            }
            if(is_found==0)
                cout<<"Doesn't Exist !!"<<endl;
        }
        else{
            bool is_found=0;
            cout<<"value "<<val<<" Exist at Index :-";
            for(int i=0;i<=lastindex;i++){
                if(ptr[i]==val){
                    cout<<i<<" ";
                    is_found=1;
                    break;
                }
            }
            if(is_found==0)
                cout<<"Doesn't Exist !!"<<endl;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Array doesn't Exist !!"<<endl;
    }
}
template<class X>
void Array<X>::extend(X*a,int ind){
    try{
        if(a==NULL)
            throw 1;
        else if(ind<0)
            throw 1;
        if(ptr==NULL){
            capacity=ind;
            lastindex=-1;
            ptr=new X[capacity];
            int i=0;
            while(i<=ind){
                append(a[i]);
                i++;
            }

        }
        else if(ind<=capacity-lastindex+1){
            int i=0;
            while(i<=ind){
                append(a[i]);
                i++;
            }  
        }
        else{
            int i=0,j=lastindex+1;
            while(j<=capacity-1){
                append(a[i]);
                j++;
            }
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Empty Paramter Provided !!"<<endl;
    }
}
template<class X>
void Array<X>::extend(Array<X>&a){
    try{
        if(a.ptr==NULL)
            throw 1;
        if(ptr==NULL)
        {
            ptr=new X[a.capacity];
            capacity=a.capacity;
        }
        if(a.lastindex<=capacity-lastindex+1){// approprite jagah hai.
            int i=0;
            while(i<=a.lastindex){
                append(a.ptr[i]);
                i++;
            }
        }
        else{// agar badi hai tab.
            int i=lastindex+1;int j=0;
            while(i<=capacity-1){
                append(a.ptr[j]);
                j++;
            }
        }

    }
    catch(int e){
        if(e==1)
            cout<<"Empty Reference Provided !!"<<endl;
    }
}
template<class X>
void Array<X>::status(){
    cout<<"Current Status Of Array ......"<<endl;
    cout<<"Array :- ";
    ptr!=NULL?cout<<"Is Exist "<<endl:cout<<"NULL"<<endl;
    cout<<"Total Capacity :- "<<capacity<<endl;
    cout<<"Total Element's :- "<<lastindex+1<<endl;
    cout<<"Last Index :- "<<lastindex<<endl;
    cout<<"Dataype array :- ";
    if(typeid(X)==typeid(string))
      cout<<"string"<<endl;
    else if(typeid(X)==typeid(int))
        cout<<"Integer"<<endl;
    else if(typeid(X)==typeid(float))
        cout<<"Float"<<endl;
    else if(typeid(X)==typeid(char))
        cout<<"Character"<<endl;
    else{
        cout<<typeid(X).name()<<endl;
    }
    


}
template<class X>
Array<X>::Array(Array<X>&a){
    if(ptr!=NULL){
        delete[]ptr;
        ptr=NULL;
        lastindex=-1;
        capacity=0;
    }
    if(a.ptr==NULL){
        ptr=NULL;
        lastindex=-1;
        capacity=0;
    }
    else{
        capacity=a.capacity;
        lastindex=a.lastindex;
        ptr=new X[capacity];
        for(int i=0;i<=lastindex;i++){
            ptr[i]=a.ptr[i];
        }
    }

}
template<class X>
void Array<X>::copy(Array<X>&a){
    try{
        if(a.ptr==NULL)
            throw 1;
        if(ptr!=NULL)
            clear();
        ptr=new X[a.capacity];
        capacity=a.capacity;
        lastindex=a.lastindex;
        for(int i=0;i<=a.lastindex;i++)
        {
            ptr[i]=a.ptr[i];
        }
        cout<<"Array Copied Successfully !!"<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Empty Reference provided !!"<<endl;
    }
}
template<class X>
Array<X>::~Array(){
    if(ptr){
        delete []ptr;
    }
}
template<class X>
X& Array<X>::operator[](int ind){
    try{
        if(ptr==NULL)
            throw 1;
        else if(ind>lastindex)
            throw 2;
        return ptr[ind];
    }
    catch(int e){
        if(e==1)
            cout<<"Array doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Invlid Parmater !!"<<endl;
        throw;
    }
}
template<class X>
X& Array<X>::front(){
    if (ptr == NULL) {
        throw "Array doesn't exist!";
    }
    return ptr;
}
template<class X>
void Array<X>::sort(int asc){
    try{
        if(ptr==NULL)
            throw 1;
        else if(asc!=0&&asc!=1){
            throw 2;
        }
        if(asc){
            for(int i=0;i<lastindex;i++){
                int swap=0;
                for(int j=0;j<lastindex-i;j++){
                    if(ptr[j]>ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                        swap=1;
                    }
                }
                if(swap==0){
                    break;
                }
            }
        }
        else{
            for(int i=0;i<lastindex;i++){
                int swap=0;
                for(int j=0;j<lastindex-i;j++){
                    if(ptr[j]<ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                        swap=1;
                    }
                }
                if(swap==0){
                    break;
                }
            }
        }
    }
    catch(int e){
        if(e==1){
            cout<<"Array doesn't exist !!"<<endl;
        }
        else if(e==2){
            cout<<"Invalid  sorting parameter !!"<<endl;
        }
    }
}
template<class X>
void Array<X>::update(int ind,int val){
    try{
        if(ptr==NULL)
            throw 1;
        else if(ind<0||ind>lastindex){
            throw 2;
        }
        ptr[ind]=val;
    }
    catch(int e){
        if(e==1){
            cout<<"Array Doesn't Exist !!"<<endl;
        }
        else if(e==2){
            cout<<"Invalid Index value !!"<<endl;
        }
    }
}
template<class X>
int Array<X>::get_lastindex(){
    return lastindex;
}
template<class X>
int Array<X>::get_size(){
    return capacity;
}
template<class X>
void Array<X>::input(X a[],int ind){
    if(ptr==NULL)
    {
        if(ind>=0)
            capacity=ind;
        lastindex=ind-1;
        ptr=new X[capacity];
        for(int i=0;i<=ind-1;i++)
        {
            ptr[i]=a[i];
        }

        
    }
    else if(ind<=capacity-lastindex+1){
        int i=0;
        while(i<=ind-1){
            append(a[i]);    
            i++;
        }
    }
    else{
        int i=0,j=lastindex;
        while(j<=capacity-lastindex+1)
        {
            append(a[i]);
            i++;
            j++;
        }
    }
    
}
template<class X>
void Array<X>::clear(){
    if(ptr!=NULL)
    {
        delete []ptr;
        lastindex=-1;
        ptr=NULL;
        capacity=0;
    }
}
template<class X>
void Array<X>::get_item(int ind){
    try{
        if(ptr==NULL)
            throw 1;
        else if(ind>lastindex||ind<0)
            throw 2;
        cout<<"value at ptr["<<ind<<"] ="<<ptr[ind]<<endl;
    }
    catch(int e){
        if(e==1)
            cout<<"Array Doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Invalid Index Value !!"<<endl;
    }
}
template<class X>
bool Array<X>::is_full(){
    return lastindex==capacity-1;
}
template<class X>
bool Array<X>::is_empty(){
    return ptr==NULL||lastindex==-1;
}
template<class X>
void Array<X>::print(){
    try{
        if(ptr==NULL)
            throw 1;
        if(sizeof(X)==1)
        {
            for(int i=0;i<=lastindex;i++)
                cout<<ptr[i];
            cout<<endl;
        }
        else{
            for(int i=0;i<=lastindex;i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Array Doesn't Exist"<<endl;
    }
}
template<class X>
void Array<X>::create_array(int cap){
    try{
        if(cap<=0)
            throw 1;
        if(ptr==NULL)
        {
            capacity=cap;
            lastindex=-1;
            ptr=new X[capacity];
        }
        else if(ptr!=NULL&&lastindex!=-1){
            delete[]ptr;
            lastindex=-1;
            capacity=cap;
            ptr=new X[capacity];

        }
        else{
            throw 2;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Invalid Capacity Value"<<endl;
        else if(e==2){
            cout<<"Array Creation unsuccessful<NOn Empty Array Already Exist>"<<endl;
        }
    }
    
}
template<class X>
void Array<X>::append(X a){
    try{
        if(lastindex==capacity-1)
            throw 1;
        else if(ptr==NULL)
            throw 2;
        lastindex++;
        ptr[lastindex]=a;
        
    }
    catch(int e){
        if(e==1)
            cout<<"Array Overflow"<<endl;
        else if(e==2)
            cout<<"Array Doesn't Exist !!"<<endl;
    }
}
template<class X>
Array<X>::Array(){
    lastindex=-1;
    capacity=0;
    ptr=NULL;

}
template<class X>
Array<X>::Array(int cap){
    if(cap<0){
        capacity=0;
        lastindex=-1;
        ptr=NULL;
    }
    else{
        capacity=cap;
        lastindex=-1;
        ptr=new X[capacity];
    }
}

int main()
{
   Array<char>b(7),c;
   b.append('k');
   b.append('P');
   b.append('X');
   b.append('y');
   c.create_array(5);
   char p[6]={'a','d','i','t','y'};
   c.append('f');
   c.append('u');
   c.append('c'); 
   c.extend(p,5);
    c.print();
    c.status();
    b.extend(c);
    b.print();
    b.status();
    /*Array <string>d;
    d.create_array(5);
    d.append("Aditya");
    d.append("bittu");
    d.append("bhai behen");
    d.print();
    d.status();*/
   //char a[]="Aditya";
   //b.input(a,6);
//    b.sort();
//    b.print();
//    b.status();

//    b[3]='k';
//    cout<<b[3];
   return 0;
}