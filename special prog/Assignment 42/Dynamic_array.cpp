// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define  Negative_Value_Encounterd 1
#define  Array_Doesnt_Exist 2
#define  Empty_Reference_provided 3
#define  Invalid_Index 4
class Dynamic_array{
    private:
        int *ptr;
        int size;
        int lastindex;
    protected:
        bool is_half();
        void Double_Array();
        void Half_array();
        bool is_sorted();
        
    public:
        Dynamic_array();
        Dynamic_array(int);
        ~Dynamic_array();
        Dynamic_array(Dynamic_array&);
        Dynamic_array operator=(Dynamic_array &);
        void create_array(int);
        void append(int);
        void extend(int*,int);
        void extend(Dynamic_array&);
        //void Merge(Dynamic_array&);
        void sort(int=1);
        void Remove(int);
        void del(int);
        bool Is_Empty();
        int get_index(int);
        int get_capacity();
        void set(int,int);
        int operator[](int);
        void clear();
        void Reverse();
        int pop();
        bool contains(int);
        void print();
    
};
// void Dynamic_array::merge(Dynamic_array&D){
//     try{
//         if(ptr==NULL)
//             throw Array_Doesnt_Exist;
        
//     }
//     catch(int e){
//         if(e==2)
//             cout<<"Array_Doesnt_Exist"<<endl;
//     }
// }
Dynamic_array Dynamic_array::operator =(Dynamic_array&D){
    if(ptr!=NULL)
        clear();
    if(D.ptr==NULL){
        lastindex=-1;
        size=0;
    }
    else{
        size=D.size;
        lastindex=D.lastindex;
        ptr=new int[size];
        for(int i=0;i<=lastindex;i++)
        {
            ptr[i]=D.ptr[i];
        }
    }
    return *this;
}
Dynamic_array::Dynamic_array(Dynamic_array&D){
    ptr=NULL;
    if(D.ptr==NULL){
        lastindex=-1;
        size=0;
    }
    else{
        size=D.size;
        lastindex=D.lastindex;
        ptr=new int[size];
        for(int i=0;i<=lastindex;i++)
        {
            ptr[i]=D.ptr[i];
        }
    }
}
int Dynamic_array::operator[](int index){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        if(index<0||index>lastindex)
            throw Invalid_Index;
        return ptr[index];
    }
    catch(int e){
        if(e==4)
            cout<<"Invalid_Index"<<endl;
        else if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
        return -1;
    }
    
}
void Dynamic_array::Reverse(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        if(lastindex%2==0){
            for(int i=0,j=lastindex;i!=j;i++,j--){
                int k=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=k;
            }
        }
        else{
            int i,j;
            for(i=0,j=lastindex;(i<=lastindex/2)&&(j>=lastindex/2);i++,j--){
                int k=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=k;
            }
            
        }
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
void Dynamic_array::del(int index){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        else if(index<0||index>lastindex)
            throw Invalid_Index;
        int i=index;
        while(i<=lastindex-1)
        {
            ptr[i]=ptr[i+1];
            
            i++;
        }
        lastindex--;
        
        
    }
    catch(int e){
        if(e==1)
            cout<<"Array_Doesnt_Exist"<<endl;
        else if(e==4)
            cout<<"Invalid_Index"<<endl;
    }
}
void Dynamic_array::Remove(int val){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        int i;
        for(i=0;i<=lastindex;i++)
            if(ptr[i]==val)
                break;
        if(i==lastindex+1)
            cout<<"Value Not Found !!"<<endl;
        else{
            while(i<=lastindex-1){
            ptr[i]=ptr[i+1];
            i++;
            }
            lastindex--;
        }
        
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
    
}
int Dynamic_array::pop(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        return ptr[lastindex];
        lastindex--;
    }
    catch(int e){
        if(e==1)
            cout<<"Array_Doesnt_Exist"<<endl;
        return -1;
    }
}
void Dynamic_array::set(int index,int val){
    try{
        if(index<0||index>lastindex)
            throw Negative_Value_Encounterd;
        else if(ptr==NULL)
            throw Array_Doesnt_Exist;
        ptr[index]=val;
        
    }
    catch(int e){
        if(e==1)
            cout<<"Array_Doesnt_Exist"<<endl;
        else if(e==2)
            cout<<"Negative_Value_Encounterd"<<endl;
    }
}
int Dynamic_array::get_capacity(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        return size;
    }
    catch(int e){
        cout<<"Array_Doesnt_Exist"<<endl;
        return -1;
    }
    
}
bool Dynamic_array::is_sorted(){
    if(ptr[0]<=ptr[1]||lastindex==1){
        int i=0;
        while(i<=lastindex-1&&ptr[i]<ptr[i+1]){
            i++;
        }
        if(i==lastindex||lastindex==1)
            return true;
    }
    else if(ptr[0]>=ptr[1]||lastindex==1){
        int i=0;
        while(i<=lastindex-1&&ptr[i]>ptr[i+1]){
            i++;
        }
        if(i==lastindex||lastindex==1)
            return true;
    }
    return false;
}
int Dynamic_array::get_index(int val) {
    try {
        if (ptr == nullptr) {
            throw Array_Doesnt_Exist;
        }

        if (is_sorted()) {
            for (int i = 0; i <= lastindex; i++) {
                if (ptr[i] == val) {
                    return i;
                }
            }
        } else {
            int mid = lastindex / 2;
            if (ptr[mid] == val) {
                return mid;
            } else if (ptr[mid] < val) {
                for (int i = mid + 1; i <= lastindex; i++) {
                    if (ptr[i] == val) {
                        return i;
                    }
                }
            } else {
                for (int i = 0; i < mid; i++) {
                    if (ptr[i] == val) {
                        return i;
                    }
                }
            }
        }
        return -1;

    } catch (int e) {
        if (e == Array_Doesnt_Exist) {
            std::cout << "Array doesn't exist" << std::endl;
        }
        return -1;
    }
}
bool Dynamic_array::Is_Empty(){
    try{
        if(ptr==NULL){
            throw Array_Doesnt_Exist;
        }
        else if(lastindex==-1)
            return true;
        else{
            return false;
        }
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
        return true;
    }
}
void Dynamic_array::sort(int asc){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
    
        if(asc){
            for(int i=0;i<=lastindex;i++){
                for(int j=0;j<=lastindex-i-1;j++){
                    if(ptr[j]>ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                    }
                }
            }
        }
        else{
           for(int i=0;i<=lastindex;i++){
                for(int j=0;j<=lastindex-i-1;j++){
                    if(ptr[j]<ptr[j+1]){
                        int k=ptr[j];
                        ptr[j]=ptr[j+1];
                        ptr[j+1]=k;
                    }
                }
            } 
        }
    }
    catch(int e){
        if(e==2){
            cout<<"Array_Doesnt_Exist "<<endl;
        }
    }
}
void Dynamic_array::extend(Dynamic_array &D){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        if(D.ptr==NULL)
            throw Empty_Reference_provided;
        for(int i=0;i<=D.lastindex;i++){
            if(lastindex==size-1)
                Double_Array();
            lastindex++;
            ptr[lastindex]=D.ptr[i];
        }
        
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
Dynamic_array::~Dynamic_array(){
    delete []ptr;
    ptr =NULL;
}
void Dynamic_array::extend(int *arr,int s){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        int j=lastindex+1;
        for(int i=0;i<s;i++){
           if(lastindex==size-1)
                Double_Array();
            lastindex++;
            ptr[j]=arr[i];
            j++;
            
        }
        
    }
    catch(int e){
        if(e==2)
        {
           cout<<"Array_Doesnt_Exist"<<endl; 
        }
    }
}
bool Dynamic_array::is_half(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        if(lastindex==size/2)
            return 1;
        return 0;
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
        return 0;
    }
}
void Dynamic_array::Half_array(){
    int* newptr;
    newptr=new int[size/2];
    for(int i=0;i<=lastindex;i++){
        newptr[i]=ptr[i];
    }
    size/=2;
    clear();
    ptr=newptr;
    
}
void Dynamic_array::print(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        for(int i=0;i<=lastindex;i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    catch(int e){
        if(e==2)
            cout<<"Array_Doesnt_Exist"<<endl;
    }
}
void Dynamic_array::Double_Array(){
    int *newptr= new int[size*2];
    for(int i=0;i<=lastindex;i++){
        newptr[i]=ptr[i];
    }
    clear();
    size=size*2;
    ptr=newptr;
    
}
Dynamic_array::Dynamic_array(){
    size=0;
    ptr=NULL;
    lastindex=-1;
}
Dynamic_array::Dynamic_array(int cap){
    try{
        if(cap<0)
            throw Negative_Value_Encounterd;
        size=cap;
        ptr= new int[size];
        lastindex=-1;
        
        
    }
    catch(int e){
        if(e==1)
            cout<<"Negative_value_Encountered !!";
    }
}
void Dynamic_array::create_array(int cap){
    try{
        if(cap<0)
            throw Negative_Value_Encounterd;
        size=cap;
        ptr=new int [size];
        lastindex=-1;
    }
    catch(int e){
        if(e==1)
            cout<<"Negative value Enconterd !!"<<endl;
    }
}
void Dynamic_array::append(int val){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        if(lastindex==size-1)
            Double_Array();
        lastindex++;
        ptr[lastindex]=val;
    }
    catch(int e){
        if(e==2)
            cout<<"Array Doesn't Exist !!"<<endl;
    }
}
void Dynamic_array::clear(){
    try{
        if(ptr==NULL)
            throw Array_Doesnt_Exist;
        delete []ptr;
        ptr=NULL;
    }
    catch(int e){
        if(e==2)
            cout<<"Array Not Found !!"<<endl;
    }
}



int main() {
    Dynamic_array D;
    D.create_array(2);
    D.append(5);
    D.append(10);
    D.append(20);
    D.append(45);
    Dynamic_array k=D;
    k.print();
    D.Reverse();
    k=D;
    k.print();
    D.print();
    cout<<endl<<D[-2];

    return 0;
}