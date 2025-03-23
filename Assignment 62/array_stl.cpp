#include<iostream>
using namespace std;
#include<array>
#include<stdio.h>
#include<string.h>
struct Bio{
    char name[30];
    int age;
    void print()
    {
        cout<<"Name - "<<this->name<<endl;
        cout<<"Age - "<<this->age<<endl;
    }
    void input()
    {
        cout<<"Enter Name :- ";
        cin.ignore();

        cin.getline(name,30);
        cout<<"Enter age :- ";
        cin>>age;
    }
};
int main()
{
    //array<int,5>arr={10,15,31,42,45};
    //array<string,5>city={"bhopal","delhi","jaipur","Noida","karachi"};
    //array<char,6>letter={'S','V','b','M','Y','k'};
    //Bio b1,b2,b3;
    /*b1.input();
    b2.input();
    b3.input();
    array<Bio ,3>Data={b1,b2,b3};*/

   /* !!accessing array elements !!*/
   /* subscript optr[] doesn't offer bound checking  
   for(int i=0;i<=5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/

    /* .at() offers better bound checking and exception handling 
    try{
        for(int i=0;i<=5;i++)
            cout<<arr.at(i)<<" ";
        cout<<endl;
    }
    catch(out_of_range e){
        cout<<e.what()<<endl;
    }*/

    /* using implicit iterator range for Loop
    for(auto X:city){
        cout<<"city -"<<X<<endl;
    }


    for(auto X:Data){
        X.print();// auto handles every possible datatype.
    }*/


    /* Explicit iterator*/
    
    /* Iterator read and write and update 
    array<int,20>::iterator it1;
    it=arr.begin();
    *(it+2)=32; // array provides Random access iterator.
    for(it1=arr.begin();it1!=arr.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;*/
    
    
    
    //array<int,5>::const_iterator it2;
    //*(it2+2)=21;// const iterator cant update .

    
    
    /*
        string being updated using iterator object !!
    array<string,5>::iterator p;
    p=city.begin();
    *(p+3)="Bikaner";
    for(p=city.begin();p!=city.end();p++)
        cout<<*p<<" ";
    cout<<endl;*/

    /* reverse iterator 
    array<int,5>::reverse_iterator itr;
    for(itr=arr.rbegin();itr!=arr.rend();itr++){
        cout<<*itr<<" ";
    // value can be updated and assigned easily..
    }*/

    /* const reverse iterator 
    array<int,5>::const_reverse_iterator itcr;
    for(itcr=arr.crbegin();itcr!=arr.crend();itcr++){
        cout<<*itcr<<" ";
    }
    // value update ya assign nhi hogi bas .
    */

    
    
    // Array stl Methods . 
    array<int,7> a={10,20,30,40,50};
    cout<<"front- "<<a.front()<<endl;
    cout<<"Back :- "<<a.back()<<endl; // returns reference of front and back
    a.front()=25;
    cout<<a.front()<<endl;// changing the value as its refence of first element.

    int*arr=a.data();// returns the pointer pointing the array.
    cout<<*arr<<endl;  
    
    cout<<"Size :- "<<a.size()<<endl;// returns current size.

    cout<<"Capacity :- "<<a.max_size()<<endl; // returns maximum no element array can store .
    // return 7 bcoz initializer list use so all index full filled hoge empty wale having 0.
    
    
    cout<<boolalpha<<a.empty()<<endl; // returns true or false .
    
    array<string,5> B;
    B.fill("terimkb");  // fills entire array with same value ..
    for(auto X:B)
        cout<<X<<" ";
    cout<<endl;
    // swaps content of two arrays !!
    a.swap(B); // both array has to be same type . and same size ohkk !!
    for(auto X:B)
        cout<<X<<" ";
    cout<<endl;
    for(auto X:a)
        cout<<X<<" ";
    cout<<endl;

    return 0;
}