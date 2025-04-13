#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>

class Hashtable{
    private:
        int size;
        vector<int> table;
        int emptyvalue;

    public:
        Hashtable(int,int=-1);
        int Hashfn(int);
        bool insert(int);
        bool search(int);
        void display();
        int find(int);

};
Hashtable::Hashtable(int s,int emptyval){
    size=s;
    emptyvalue=emptyval;
    table.resize(size,emptyvalue);
}
int Hashtable::Hashfn(int key){
    return key%size;
}
bool Hashtable::insert(int key){
    int index=Hashfn(key);
    int orgindex=index;
    while(table[index]!=emptyvalue){
        
        index=(index+1)%size;
        if(index==orgindex){
            // table is full
            cout<<"Hash table is full can't inset key "<<key<<endl;
            return false;
        }
        
    }
    table[index]=key;
    cout<<"Insertion of "<<key<<" Successfull !!"<<endl;
    return true;
}
bool Hashtable::search(int key){
    int index=Hashfn(key);
    int orgindex=index;
    while(table[index]!=-1){
        if(table[index]==key)
            return true;
        index=(index+1)%size;
        if(index==orgindex)
            break; // cycle completed !!

    }
    return false;

}
int Hashtable::find(int key){
    int index=Hashfn(key);
    int orgindex=index;
    while(table[index]!=emptyvalue){
        if(table[index]==key)
            return index;
        index=(index+1)%size;
        if(index==orgindex)
            return -1;
    }
    
}
void Hashtable::display(){
    for(int i=0;i<=size-1;i++){
        if(table[i]==emptyvalue){
            cout<<"Slot "<<i<<"[Empty]"<<endl;
        }
        else{
            cout<<"slot "<<i<<" : "<<table[i]<<endl;
        }
    }
}

int main()
{
        Hashtable hashTable(10);
    
        // Insert keys
        hashTable.insert(1);
        hashTable.insert(3);
        hashTable.insert(12);
        hashTable.insert(4);
        hashTable.insert(25);
        hashTable.insert(6);
        hashTable.insert(18);
        hashTable.insert(20);
        hashTable.insert(8);

    
        // Display hash table
        hashTable.display();
    
        // Search for a key
        int keyToSearch = 25;
        if (hashTable.search(keyToSearch)) {
            cout << "Key " << keyToSearch << " found in hash table." << endl;
        } else {
            cout << "Key " << keyToSearch << " not found in hash table." << endl;
        }
        cout<<"Index of 8 is :- "<<hashTable.find(8)<<endl;
    
    return 0;
}