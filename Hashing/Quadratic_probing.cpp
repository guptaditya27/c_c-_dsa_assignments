#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
class Hashtable{
    private:
        vector<int>table;
        int size;
        int emptyvalue;
    public:
        Hashtable(int,int=-1);
        int hashfunction(int);
        bool insert(int);
        void display();
};
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
Hashtable::Hashtable(int s,int emptyval){
    size=s;
    emptyvalue=emptyval;
    table.resize(size,emptyvalue);

}
int Hashtable::hashfunction(int key){
    return ((key*key)%size);
}
bool Hashtable::insert(int key){
    int index=hashfunction(key);
    int orgindex=index;
    int i=1;
    while(table[index]!=emptyvalue&&i<=size){
        index=(orgindex+(i))%size;                 
        if(index==orgindex){
            cout<<"HAsh table full insertion Unsuccess !!"<<endl;
            return false;
        }
        i++;
    }
    table[index]=key;
    cout<<"key "<< key<<" insertion Successfull !!"<<endl;
    return true;
}
int main()
{
    Hashtable hashtable(10);
    hashtable.insert(1);
    hashtable.insert(3);
    hashtable.insert(12);
    hashtable.insert(4);
    hashtable.insert(25);
    hashtable.insert(6);
    hashtable.insert(18);
    hashtable.insert(20);
    hashtable.insert(8);

    hashtable.display();


    return 0;
}