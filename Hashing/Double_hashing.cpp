#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
class Hashtable{
    private:
        vector<int> table;
        int size;
        int emptyvalue;
    protected:
        int h1(int);
        int h2(int);
    public:
        Hashtable(int,int=-1);
        bool insert(int);
        bool search(int);
        void display();
        int find(int);

};
int Hashtable::find(int key){
    int index=h1(key);
    int orgindex=index;
    int step=h2(key);
    int i=1;
    while(table[index]!=emptyvalue){
        if(table[index]==key)
            return index;
        index=(orgindex+i*step)%size;
        if(index==orgindex)
            return -1;
        i++;
    }
    return -1;

}
void Hashtable::display(){
    for(int i=0;i<size;i++){
        if(table[i]==emptyvalue){
            cout<<"Slot "<<i<<" [empty]"<<endl;
        }
        else{
            cout<<"Slot "<<i<<" : "<<table[i]<<endl;
        }
    }
}
bool Hashtable::search(int key){
    int index=h1(key);
    int step=h2(key);
    int orgindex=index;
    int i=1;
    while(table[index]!=emptyvalue){
        if(table[index]==key){
            cout<<"Key "<<key<<" found at index "<<index<<endl;
            return true;
        }
        index=(orgindex+i*step)%size;
        if(index==orgindex)
            break;
        i++;
    }
    cout<<"key "<<key<<" Not found in Table"<<endl;
    return false;
}
bool Hashtable::insert(int key){
    int index=h1(key);
    int step=h2(key);
    int orgindex=index;
    int i=1;
    while(table[index]!=emptyvalue&&i<=size){
        index=(orgindex+i*step)%size;
        if(index==orgindex){
            cout<<"Insertion Unsuccess -- Hash Table FUll !!"<<endl;
            return false;
        }
        i++;


    }
    table[index]=key;
    cout<<"key "<<key<<" Inserted Successfully !!"<<endl;
    return true;

    

}
int Hashtable::h1(int key){
    return key%size;
}
int Hashtable::h2(int key){
    return 1+(key%(size-1));
}
Hashtable::Hashtable(int s,int emptyval){
    size=s;
    emptyvalue=emptyval;
    table.resize(size,emptyvalue);

}
int main()
{
   Hashtable hashtable(10);
   hashtable.insert(20);
   hashtable.insert(34);
   hashtable.insert(45);
   hashtable.insert(70);
   hashtable.insert(56);
   hashtable.display();
    hashtable.search(11);
    hashtable.search(45);
    cout<<hashtable.find(56)<<endl;
    cout<<hashtable.find(-1)<<endl;
    return 0;
}