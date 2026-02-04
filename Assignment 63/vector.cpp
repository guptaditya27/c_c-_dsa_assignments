#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<stdio.h>
#include<initializer_list>
#include<algorithm>
struct man{
    string name;
    int age;
    void print(){
        cout<<"name :- "<<this->name<<" Age:- "<<this->age<<endl;
    }

};

int main()
{
    // vector<int>vz={11,25,14,32,24,26};
    // vector<string> vy={"ravi","Nitu","Manjul","Preeti","Anita"};
    // man m1,m2,m3,m4,m5;
    // m1.name="Mahesh";
    // m1.age=20;
    // m2.age=21;m2.name="Allu";
    // m3.age=22;m3.name="Arjun";
    // m4.age=25;m4.name="arun";
    // m5.age=26;m5.name="Munni";


    //vector<int>v1={11,25,14,32,24,26};
    //vector<int>v2;
    //vector<string> v3={"ravi","Nitu","Manjul","Preeti","Anita"};



    /* acessing vector elements */

    /*1. using [] subscriptr optr doesn't offers bound checking*/
    /*for(int i=0;i<=v1.size();i++)
        cout<<v1[i]<<" ";
    */

    
    
    /*2. using .at() function offers bound checking*/
    /*try{
        for (int i = 0; i <=v1.size(); i++)
        {
            cout<<v1.at(i)<<" ";//throwing exception index out of range .
        }
    }
    catch(out_of_range e){
        cout<<e.what()<<endl;
    }*/

    // 3. using implicit iterator .
    /*for(auto X:v1){
        cout<<X<<" ";
    }
    cout<<endl;*/

    
    
    
    // Using Explicit iterator's 
    
    // 1. How to get iterator object !!
    // vector<string>::iterator it1,itr;
    // vector<string>::reverse_iterator it2,itrr;
    // vector<string>::const_iterator it3,itrrr;
    // vector<string>::const_reverse_iterator it4,itrrrr;
    // for(it1=v3.begin();it1!=v3.end();it1++)
    //     cout<<*it1<<" ";
    // cout<<endl;
    // itr=v3.begin();
    // *(itr+3)="Manoj"; // due to random access ittr it+3 possible..

    // for(it3=v3.cbegin();it3!=v3.cend();it3++)
    //     cout<<*it3<<" ";
    // cout<<endl;
    // itrrr=v3.cbegin();
    // //*(itrrr+3)="rohit";// will throw an error that const itr cant modify or set value.

    // /*for(it2=v3.rbegin();it2!=v3.rend();it2++)
    //     cout<<*it2<<" ";// print in reverse order .
    // cout<<endl;*/
    // //itrr=v3.rbegin();
    // //*(itrr+3)="rohit";

    // /*for(it4=v3.crbegin();it4!=v3.crend();it4++)
    //     cout<<*it4<<" ";// print in reverse order .
    // cout<<endl;
    // itrrrr=v3.crbegin();
    // //*(itrrrr+3)="rohit"; // const assign error */


    //  vector methods 
    //1.  Inserting data in vector.
    // vector<int>v1;
    // vector<string>v2;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30); // adds element to last.
    // cout<<"first  using pushback:- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;
    // v2.push_back("vinay");
    // v2.push_back("Piyush");
    // v2.push_back("Lalit"); //adds to last.
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;

    // v1.insert(v1.begin()+1,{33,54,13});
    // cout<<"second  using iterators {int list}:- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;
    
    
    // v1.insert(v1.end(),69);
    // cout<<"third,(int) :- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;
    
    
    // int k=34;
    // int &w=k;
    // v1.insert(v1.end(),w);// reference variable .
    // cout<<"fourth (&int):- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;
    


    // v1.insert(v1.begin()+2,4,21);//addds 21 four times
    // cout<<"fifth (int,int no):- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;

    // v1.insert(v1.begin()+5,vz.begin()+2,vz.end());
    // cout<<"sixth (iterator start,iterator end):- ";
    // for(auto X:v1)
    //     cout<<X<<" ";
    // cout<<endl;


    // // overloading insert for string .
    // vector<string>::const_iterator itl;
    // itl=v2.begin();
    // v2.insert(itl+2,{"raghu","raj","parul"});
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;

    // itl=v2.begin();
    // v2.insert(itl,"Pinky");
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;
    
    // itl=v2.begin();
    // v2.insert(itl+v2.size(),2,"Micky");
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;

    // itl=v2.begin();
    // v2.insert(itl,vy.begin()+2,vy.end());
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;
    
    
    // // wants to add in reverse .
    // vector<string>::reverse_iterator rt;
    // rt=vy.rbegin();
    // itl=v2.begin();
    // v2.insert(itl+v2.size(),rt,vy.rend());
    // for(auto X:v2)
    //     cout<<X<<" ";
    // cout<<endl;



    // Creating Non primitive vector and inserting values 
    //using insert and Emplace()

    //vector<man> vman;
    //vector<man> vman2;

    // vman.push_back(m1);
    // for(auto X:vman)
    //     X.print();
    // cout<<endl;

    // vman.insert(vman.begin()+1,{m2,m3});
    // for(auto X:vman)
    //     X.print();
    // cout<<endl;

    // vman.insert(vman.end(),m4);
    // for(auto X:vman)
    //     X.print();
    // cout<<endl;
    // vman.insert(vman.end(),2,m5);
    // for(auto X:vman)
    //     X.print();
    // cout<<endl;

    // vman.insert(vman.end()-3,vman.rbegin()+2,vman.rend());
    // for(auto X:vman)
    //     X.print();
    // cout<<endl;



    // Emplace() fn use .

    // vman2.emplace_back(m1);
    // for(auto X:vman2)
    //     X.print();
    // cout<<endl;

    // vman2.emplace(vman2.end(),m2);
    // for(auto X:vman2)
    //     X.print();
    // cout<<endl;

    // emplace doesn't have any overloaded version .

    // deleting values from vector.

    //1. using erase();
    // vz.erase(vz.begin());
    // for(auto X:vz)
    //     cout<<X<<" ";
    // cout<<endl;

    // vz.erase(vz.begin(),vz.begin()+2);
    // for(auto X:vz)
    //     cout<<X<<" ";
    // cout<<endl;
    //vz.shrink_to_fit(); // shrinks size of vector just to manage storage 
    // accessibility.



    //2. using pop_back() deletes last element 
    // vz.pop_back();
    // for(auto X:vz)
    //     cout<<X<<" ";
    // cout<<endl;


    // functions for vector .
    //1. creating and declaring vector object of various datatypes;
    vector<int>v1={10,14,32,21,36,47};
    vector<string>v2={"raja","ram","mohan","roy","pandat","mishra"};
    vector<man>v3;
    
    
    
    
    // Iterators's Revision.
    /*vector<int>::iterator it1;
    it1=v1.begin();
    vector<int>::iterator it2;
    it2=v1.end();
    cout<<"using mtd 1"<<endl;
    while(it1!=it2){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    cout<<"Using mtd 2"<<endl;
    for(auto X:v1){
        cout<<X<<" ";
    }
    cout<<endl;

    cout<<"Reverse using mtd 1"<<endl;
    
    for(it2=v1.end()-1,it1=v1.begin(),*it2=3264;it2!=it1;it2--){
        cout<<*it2<<" ";
    }
    cout<<endl;

    // using other types of initializers also.
    vector<string>::const_iterator it3;
    cout<<"Const iterator "<<endl;
    for(it3=v2.begin();it3!=v2.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;

    //cout<<*it3;// memory got released after for loop completes its execution.
    vector<string>::reverse_iterator it4;
    cout<<"reverse iterator "<<endl;
    for(it4=v2.rbegin();it4!=v2.rend();it4++){
        cout<<*it4<<" ";
    }
    cout<<endl;
    
    
    vector<string>::const_reverse_iterator it5;
    cout<<"Const_reverse iterator "<<endl;
    for(it5=v2.crbegin();it5!=v2.crend();it5++){
        cout<<*it5<<" ";
    }
    cout<<endl;
    
    vector<string>::reverse_iterator it6;
    cout<<endl;cout<<" beginning using reverse_iterator "<<endl;
    for(it6=v2.rend()-1;it6!=v2.rbegin();it6--){
        cout<<*it6<<" ";
    }
    cout<<endl;

    */
    // Vector's function's Revision.
    
    /* // Insert fn and all of its overloaded version's */
    cout<<"Previous :- ";
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    int k=42;
    v1.push_back(k);
    v1.push_back(100);
    cout<<"After :- ";
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;


    v1.insert(v1.begin()+2,{45,46,32,12,11});
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    v1.insert(v1.end(),77);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    v1.insert(v1.end()-1,71);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    int w=23;
    v1.insert(v1.begin()+3,w);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+2,3,15);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>v5={25,26,22,27};
    vector<int>::iterator its,ite;
    its=v5.begin();
    ite=v5.end();
    v1.insert(v1.end(),its,ite);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;


   // pop_back(). void hai return type .
   v1.pop_back();
   for(auto x:v1){
    cout<<x<<" ";
    }

    // v1.clear();
    // //cout<<"After clear";
    // for(auto x:v1){
    //     cout<<x<<" ";
    // }
    cout<<endl<<"v5 Before :- ";
    for(auto x:v5){
        cout<<x<<" ";
    }
    v5.erase(v5.begin(),v5.end()-2);
    cout<<endl<<"V5 Vector After:- "<<endl;
    for(auto x:v5){
        cout<<x<<" ";
    }
    cout<<endl;

    //v5.erase(v5.end()-1);
    // cout<<"V5 after last erase :- "<<endl;
    // for(auto x:v5){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // v5.erase(v5.end()-1);
    cout<<"maxm size :- "<<v5.max_size()<<endl;
    cout<<"Capacity :- "<<v5.size()<<endl;
    cout<<"size :- "<<v5.size()<<endl;
    v5.shrink_to_fit();
    cout<<"size :- "<<v5.size()<<endl;
    cout<<"max size :- "<<v5.max_size()<<endl;
    cout<<"capacity :- "<<v5.capacity()<<endl;

    cout<<"V5 after last erase :- "<<endl;
    for(auto x:v5){
        cout<<x<<" ";
    }
    cout<<endl;
    // v5.erase(v5.end()-1);
    // cout<<"V5 after last erase :- "<<endl;
    // for(auto x:v5){
    //     cout<<x<<" ";
    // }
    // cout<<endl;


    // Emplace fn use .
    v1.emplace(v1.end()-3,14);
    v2.emplace_back("Raju");
    cout<<"Vector v3:- "<<endl;
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<endl;
    struct man m1,m2,m3;
    m1.name="anant";
    m1.age=19;
    m2.name="aryan";
    m2.age=19;
    m3.name="aman";
    m3.age=19;
    v3.emplace(v3.begin(),m1);
    v3.emplace_back(m2);
    v3.emplace(v3.begin(),m3);
    for(auto x:v3){
        x.print();
    }

    // Element Access .
    cout<<"value at index 5 "<<v1[5]<<endl;
    cout<<"value at index 7 "<<v1.at(7)<<endl;// bound checking haii.

    cout<<"Front "<<v1.front()<<endl;
    cout<<"End "<<v1.back()<<endl;
    
    v1.reserve(25);
    cout<<v1.capacity()<<endl;


















    return 0;
}