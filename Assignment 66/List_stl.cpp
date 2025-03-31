#include<iostream>
using namespace std;
#include<stdio.h>
#include<list>
#include<algorithm>
#include<string>

int main()
{
   list<int>l1={1,6,4,31,41,2,3};
   list<string>l2={"raju","aditi","Nitu","Anita","Aaryan","zoya"};
   list<int>l3;
   // Iterators for list.(bidirectional iterator)
    list<int>::iterator it1;
    list<int>::reverse_iterator it2;
    list<int>::const_iterator it3;
    list<int>::const_reverse_iterator it4;

    for(it1=l1.begin();it1!=l1.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;

    for(it2=l1.rbegin();it2!=l1.rend();it2++)
        cout<<*it2<<" ";
    cout<<endl;

    for(it3=l1.cbegin();it3!=l1.cend();it3++)
        cout<<*it3<<" ";
    cout<<endl;

    for(it4=l1.crbegin();it4!=l1.crend();it4++)
        cout<<*it4<<" ";
    cout<<endl;

    // Demonstrating what does bidirectional iterator mean.
    // list<string>::iterator lst;
    // lst=l2.begin();
    // *(lst+1)="Aditya";  (lst+1 gives error only ++ and -- optr overloaded in list.)
    // for(auto X:l2){
    //     cout<<X<<" ";
    // }
    // cout<<endl;

    cout<<l2.front()<<" front"<<endl;
    cout<<l2.back()<<" back"<<endl;

    cout<<"L3 is_empty :- ";
    l3.empty()?cout<<"True":cout<<"False";
    cout<<endl;

    cout<<"Size is :"<<l1.size()<<endl;// from 1 count no elements,

    l1.assign({1,2,3,4,5});
    for(auto X:l1)
        cout<<X<<" ";
    cout<<endl;
    cout<<"Size is :"<<l1.size()<<endl;// from 1 count no elements,
    
    list<string>::iterator its2;
    its2=l2.begin();
    l2.assign(5,"Anant");

    for(auto X:l2)
        cout<<X<<" ";
    cout<<endl;

    l2.pop_back();
    l2.pop_front();
    for(auto X:l2)
        cout<<X<<" ";
    cout<<endl;
    cout<<"Size is :"<<l2.size()<<endl;// from 1 count no elements,

    
    /*l3.insert(l3.begin(),99);
    int k=87;
    l3.insert(l3.end(),k);
    l3.insert(l3.end()-1,{83,14,25});
    l3.insert(l3.begin()+2,3,12);
    it1=l1.begin()+1;
    it2=l1.rbegin()+2;
    l3.insert(l3.end(),it1,it2);
    for(auto X:l3){
        cout<<X<<" ";
    }
    cout<<endl;*/
    // galti yeh hai ki b idirectional iterator hai tooo tu kaise it+1 kr rha hai.

    l3.insert(l3.begin(),99);
    int k=87;
    l3.insert(l3.end(),k);
    l3.insert(l3.end()--,{83,14,25});
    l3.insert(l3.begin(),3,12);
    it1=l1.begin()++;
    it2=l1.rbegin();
    l3.insert(l3.end(),it1,l1.end());// same type iterator needed .
    for(auto X:l3){
        cout<<X<<" ";
    }
    cout<<endl;
    
    
    
    //cout<<"erasing :- "<<endl;
    // l3.erase(l3.end());//erase that iterator
    // for(auto X: l3)
    //     cout<<X<<" ";
    // cout<<endl;
    // l3.erase(l3.begin(),l3.end());
    // for(auto X: l3)
    //     cout<<X<<" ";
    // cout<<endl;
    // //cout<<"l3 size:- "<<l3.empty()<<endl;

    // l3.clear();
    // cout<<"cleared list "<<endl;
    // cout<<"list l3 is_empty "<<l3.empty()<<endl;

    // resize to size 2.
    // l3.resize(2);
    // for(auto X: l3)
    //     cout<<X<<" ";
    // cout<<endl;
    // cout<<"swappping l3 with l1 ";
    // l3.swap(l1);
    // for(auto X: l3)
    //     cout<<X<<" ";
    // cout<<endl;



    l3.sort();
    cout<<" l3 after Sortying:- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;
    l1.sort();
    cout<<"L1 After Sorting:- ";
    for(auto X: l1)
        cout<<X<<" ";
    cout<<endl;
    l3.merge(l1);//clears l1 memeory 
    cout<<"L3 After Merging l1:- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;
    l3.merge({1,3,4,6});
    cout<<"L3 After Merging l1:- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;

    /*l1.splice(l1.begin(),l3);
    cout<<"l1 After splice l3 ";
    for(auto X: l1)
        cout<<X<<" ";
    cout<<endl;

    cout<<"l3 After spliceng l1 ";
    for(auto X: l3)// l3 khatm hojyega.
        cout<<X<<" ";
    cout<<endl;

    l1.splice(l1.end(),{121,161,45,26});
    cout<<"l1 After splice initialixer list  ";
    for(auto X: l1)
        cout<<X<<" ";
    cout<<endl;

    list<int>::iterator itt;
    itt=l3.begin();
    itt++;
    itt++;
    itt++;
    itt++;
    l1.splice(l1.end(),l3,itt);
    cout<<"l1 After splice l3 ";
    for(auto X: l1)
        cout<<X<<" ";
    cout<<endl;

    list<int>::iterator itt;
    itt=l3.begin();
    itt++;
    itt++;
    itt++;
    itt++;
    l1.splice(l1.end(),l3,itt,l3.end());
    cout<<"l1 After splice l3 ";
    for(auto X: l1)
        cout<<X<<" ";
    cout<<endl;*/
    
    /*cout<<"L3 before Removing 2 :- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;
    l3.remove(2);// remove all occurences .
    cout<<"L3 after Removing 2 :- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;*/

    /*cout<<"L3 before Reverse:- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;
    l3.reverse();
    cout<<"L3 after Reversing :- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;*/

    /*l3.unique();
    cout<<"L3 Unique values  :- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;*/

    /*l3.emplace_front(225);
    cout<<"L3 after Emplace front :- ";
    for(auto X: l3)
        cout<<X<<" ";
    cout<<endl;*/
    



    return 0;
}