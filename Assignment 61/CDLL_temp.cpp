#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>
#include<initializer_list>

template<class X>
struct Node{
    X val;
    Node<X> *next;
    Node<X> *prev;

};
template<class X>
class CDLL{
    private:
        Node<X>*end;
    protected:
    public:
        CDLL();//
        ~CDLL();//
        CDLL(CDLL<X>&);
        CDLL<X>& operator=(initializer_list<X>);//
        CDLL(initializer_list<X>);//
        void Insert_start(X);//
        void Insert_end(X);//
        void print(bool=0);//
        void Delete_first();//
        void Delete_last();//
        void Delete_node(Node<X>*);
        void Delete_by_value(X);//
        void Delete_by_index(int);//
        void clear();//
        void Insert_after(Node<X>*,X);//
        void Insert_before(Node<X>*,X);//
        Node<X>* find_by_value(X);//
        Node<X>* search(X,int);//
        X find(int);//
        int get_size();//
        void update(Node<X>*,X);
        void Clone(CDLL<X>&);//


};
template<class X>
void CDLL<X>::update(Node<X>*n,X val){
    if(n!=NULL)
        n->val=val;
}
template<class X>
void CDLL<X>::Clone(CDLL<X>&C){
    if(end!=NULL)
        clear();
    if(C.end!=NULL){
        Node<X>*t=C.end->next;
        while(t){
            Insert_end(t->val);
            if(t->next->prev==C.end)
                break;
            t=t->next;
        }
    }
}
template<class X>
CDLL<X>::CDLL(CDLL<X>&C){
    end=NULL;
    if(C.end!=NULL){
        Node<X>*t=C.end->next;
        while(t){
            Insert_end(t->val);
            if(t->next->prev==C.end)
                break;
            t=t->next;
        }
    }
}
template<class X>
CDLL<X>::CDLL(initializer_list<X> INT){
    end=NULL;
    for(auto x:INT){
        Insert_end(x);
    }
}
template<class X>
CDLL<X>& CDLL<X>::operator=(initializer_list<X> INT){
    if(end!=NULL)
        clear();
    for(auto A:INT){
        Insert_end(A);
    }
    
}
template<class X>
X CDLL<X>::find(int ind){
    try{
        if(end==NULL)
            throw 1;
        else if(ind<0||ind>get_size())
            throw 2;
        int i=0;
        Node<X>*t=end->next;
        while(i!=ind+1){
            t=t->next;
            i++;
        }
        return t->val;
    }
    catch(int e){
        if(e==1)
            cout<<"List Doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Invalid Index Value !!"<<endl;
    }
}
template<class X>
void CDLL<X>::Delete_by_index(int ind){
    try{
        if(end==NULL)
            throw 1;
        else if(ind<0||ind>get_size())
            throw 2;
        Node<X>*t=search(find(ind),ind);
        if(t==end){// last Node.
            end->prev->next=end->next;
            end->next->prev=end->prev;
            end=end->prev;
            delete t;
        }
        else if(t==end->next){// 1st Node.
            end->next=end->next->next;
            t->next->prev=end;
            delete t;
        }
        else if(t->next==t){
            delete t;
            end=NULL;
        }// single Node.
        else{
            t->prev->next=t->next;
            t->next->prev=t->prev;
            delete t;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"List Doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Invalid Index parameter !!"<<endl;
    }
}
template<class X>
void CDLL<X>::Delete_by_value(X val){
    try{
        Node<X>*t=find_by_value(val);
        if(t==NULL)
            throw 2;
        if(t==end){// last Node.
            end->prev->next=end->next;
            end->next->prev=end->prev;
            end=end->prev;
            delete t;
        }
        else if(t==end->next){// 1st Node.
            end->next=end->next->next;
            t->next->prev=end;
            delete t;
        }
        else if(t->next==t){
            delete t;
            end=NULL;
        }// single Node.
        else{
            t->prev->next=t->next;
            t->next->prev=t->prev;
            delete t;
        }

    }
    catch(int e){
        if(e==1)
            cout<<"List Doesn't Exist !!"<<endl;
        else if(e==2)
            cout<<"Node_Not_Found !!"<<endl;
    }
}
template<class X>
int CDLL<X>::get_size(){
    if(end==NULL)
        return -1;
    else{
        Node<X>*t=end->next;
        Node<X>*start=end->next;

        int size=-1;
        while(t){
            if(t->next==start)
                break;
            size++;
            t=t->next;
        }
        return size;
    }
}
template<class X>
Node<X>* CDLL<X>::search(X val,int ind){
   try{
        if(end==NULL)
            throw 1;
        else if(ind<0||ind>get_size())
            throw 2;
        Node<X>*t;
        int size=get_size();
        ind>size/2?t=end:t=end->next;
        int i=0;
        if(t==end){
            while(t){
                if(t->val==val&&i==ind)
                    return t;
                if(i>ind)
                    break;
                t=t->prev;
                i++;
            }
            return NULL;
        }
        else{
            while(t){
                if(t->val==val&&i==ind)
                    return t;
                if(i>ind)
                    break;
                i++;
                t=t->next;
            }
            return NULL;
        }
        
   }
   catch(int e){
    if(e==1)
        cout<<"List Doesn't Exist !!"<<endl;
    
    else if(e==2)
        cout<<"Invalid Parameter !!"<<endl; 
    return NULL;
   }
}
template<class X>
void CDLL<X>::Insert_before(Node<X>*n,X a){
    try{
        if(n==NULL)
            throw 1;
        Node<X>*t=new Node<X>;
        t->val=a;
        t->next=n;
        t->prev=n->prev;
        n->prev->next=t;
        n->prev=t;
    }
    catch(int e){
        if(e==1)
            cout<<"NULL Refernce provided !!"<<end;
    }


}
template<class X>
void CDLL<X>::Insert_after(Node<X>*n,X a){
    try{
        if(n==NULL)
            throw 1;
        Node<X>*t=new Node<X>;
        t->val=a;
        t->prev=n;
        t->next=n->next;
        n->next->prev=t;
        n->next=t;
        if(n==end)
            end=t;
    }
    catch(int e){
        if(e==1)
            cout<<"NULL Reference Provided !!"<<endl;
    }
}
template<class X>
Node<X>* CDLL<X>::find_by_value(X val){
    
    try{
        if(end==NULL)
            throw 1;
        Node<X>*n=end;
        while(n){
            if(n->val==val)
                return n;
            if(n->prev==end)
                return NULL;
            n=n->prev;

        }
    }
    catch(int e){
        if(e==1)
            cout<<"List Doesn't Exist !!"<<endl;
        return NULL;
    }

}
template<class X>
void CDLL<X>::clear(){
    while(end){
        Delete_first();
    }
}
template<class X>
CDLL<X>::~CDLL(){
    while(end){
        Delete_first();
    }
}
template<class X>
void CDLL<X>::Delete_last(){
    try{
        if(end==NULL)
            throw 1;
        if(end->next==end){
            delete end;
            end=NULL;
        }
        else{
            Node<X>*t=end;
            end->prev->next=end->next;
            end->next->prev=end->prev;
            end=end->prev;
            delete t;
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Empty List !!"<<endl;
    }
}
template<class X>
void CDLL<X>::Delete_first(){
    try{
        if(end==NULL)
            throw 1;
        if(end->next==end){
            delete end->next;
            end=NULL;
        }
        else{
            Node<X>*t=end->next;//1st node/ node to be deleted
            t->next->prev=end;
            end->next=t->next;
            delete t;
        }
    }
    catch(int e){
        cout<<"Empty List !!"<<endl;
    }
}
template<class X>
CDLL<X>::CDLL(){
    end=NULL;
}
template<class X>
void CDLL<X>::Insert_start(X data){
    Node<X>*n=new Node<X>;
    n->val=data;
    if(end==NULL){
        end=n;
        n->next=n;
        n->prev=n;
    }
    else{
        n->next=end->next;
        end->next->prev=n;
        n->prev=end;
        end->next=n;

    }
}
template<class X>
void CDLL<X>::Insert_end(X data){
    Node<X>*n=new Node<X>;
    n->val=data;
    if(end==NULL){
        end=n;
        end->next=n;
        end->prev=n;
    }
    else{
       end->next->prev=n;
       n->next=end->next;
       n->prev=end;
       end->next=n;
       end=n;
    }
}
template<class X>
void CDLL<X>::print(bool rev){
    try{
        if(end==NULL)
            throw 1;
        if(rev==1){
            Node<X>*t=end;
            while(t){
                cout<<"--------\n|   "<<t->val<<"   |\n--------\r";
                if(t->prev==end)
                    break;
                t=t->prev;
            }
            cout<<"--------\n| NULL |\n--------";
        }
        else{
            Node<X>*t=end->next;
            while(t){
                cout<<"--------\n|   "<<t->val<<"   |\n--------\r";
                if(t->next->prev==end)
                    break;
                t=t->next;
            }
            cout<<"--------\n| NULL |\n--------";
        }

    }
    catch(int e){
        cout<<"--------\n| NULL |\n--------"<<endl;
    }
}
int main()
{
   CDLL <int>C;
    C.Insert_start(10);
    C.Insert_end(20);
    C.Insert_end(30);
    //C.Delete_last();
    //C.clear();
    Node<int> *n=C.search(10,0);
    C.Insert_before(n,36);
    C.Delete_by_value(20);
    C.print();
    CDLL<int>D=C;
    D.print();
   //C.print(1);








    return 0;
}