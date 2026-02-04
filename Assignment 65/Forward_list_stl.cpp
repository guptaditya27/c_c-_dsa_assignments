#include<iostream>
using namespace std;
#include<algorithm>
#include<stdio.h>
#include<string>
#include<forward_list>
#include<vector>
int main()
{
   forward_list<int> l1={1,2,6,4,3,4,4,5,-1};
   forward_list<string> l2={"ramu","raju","adi","vinay","neeraj"};
   forward_list<int>l3;
   forward_list<string>l4;
   
   // iterator's in forward list. 
   forward_list<int>::iterator it;
   forward_list<string>::iterator its2;
   //forward_list<int>::const_iterator it1;
   //forward_list<string>::const_iterator its1;
   

   // forward list is based on singley LInked list so only single direction traversing is possible.
   // that's why no reverse iterator is given .

   // trsaversing using iterator's
   /*for(it=l1.begin();it!=l1.end();it++){
      cout<<*it<<" ";
   }
   cout<<endl;
   it=l1.begin();
   *it=999;
   cout<<"after adding using iterator :- "<<endl;
   for(it=l1.begin();it!=l1.end();it++){
      cout<<*it<<" ";
   }
   cout<<endl;

   for(it1=l1.cbegin();it1!=l1.cend();it1++){
      cout<<*it1<<" ";
   }
   cout<<endl;
   
   for(its1=l2.cbegin();its1!=l2.cend();its1++){
      cout<<*its1<<" ";
   }
   cout<<endl;
   
   for(its2=l2.begin();its2!=l2.end();its2++){
      cout<<*its2<<" ";
   }
   cout<<endl;
   its2=l2.begin();
   *its2="pappu";
   cout<<"Update start as \"pappu\" :- "<<endl;
   for(its2=l2.begin();its2!=l2.end();its2++){
      cout<<*its2<<" ";
   }
   cout<<endl;*/


   // functions in forward List;
   // 1. 
   l3.push_front(10);
   cout<<"ADDED 10 in front l3:- ";
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   l4.push_front("Raghu");
   cout<<"ADDED raghu in front l4:- ";
   for(auto X:l4)
      cout<<X<<" ";
   cout<<endl;
   l3.pop_front();// l3 becomes Empty Now.
   cout<<"popped front from l3:- ";
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;

   cout<<"Front l1:- "<<l1.front();cout<<endl;
   cout<<"Front l2:- "<<l2.front();cout<<endl;
   cout<<"Front l4:- "<<l4.front();cout<<endl;
   //cout<<"Front l3:- "<<l3.front();cout<<endl; l3 is empty.
   
   // 2. MODIFIERS
   cout<<"assigning to empty lis l3:- "<<endl; 
   l3.assign({11,22,33,46});
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   cout<<"assign to filled list l3:- "<<endl;
   l3.assign({25,625,75});
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   // l3 willhave only newly assigned values old one's clear().

   forward_list<int>l5;
   l5.assign(4,27);
   cout<<"Assigning 27 4 times to empty list l5:- "<<endl;
   for(auto X:l5)
      cout<<X<<" ";
   cout<<endl;

   forward_list<int>l6;
   it=l1.begin();
   it++;it++;it++;
   l6.assign(l1.begin(),it);
   cout<<"Assigning l6 using iterator's of l1 :- "<<endl;
   for(auto X:l6)
      cout<<X<<" ";
   cout<<endl;

   it=l3.begin();
   while(*it!=75){
      it++;
   }
   cout<<"Inserting 78 at last of l3:- "<<endl;
   l3.insert_after(it,78);
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   it++;
   l3.insert_after(it,{11,121,33});
   cout<<"Inserting {11,121,33} at last of l3:- "<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   int x=333;
   while(*it!=33){
      it++;
   }
   l3.insert_after(it,x);
   cout<<"insert 333 as var at last of l3 :- "<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;// int &&_val; yaani jab jab x change hoga _val change ho jyega as it
   //is reference variable but
   x=50;
   cout<<"Checking effct of x=50 on l3 :- "<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl; // No change on _var; bcoz _var memeory released after fn excn end and value stored to node

   l3.insert_after(++it,3,07);

   cout<<"inserting 07 3 times at end on l3 :- "<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;

   l3.insert_after(++it,l1.begin(),l1.end());
   cout<<"adding l1 at after one 7 end on l3 :- "<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   
   
   cout<<"l3 after erasing from 1"<<endl;
   l3.erase_after(it);
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;//it at 1st 7 and after 7-> 1 so deletes 1.
   
   l3.erase_after(it,l3.end());
   cout<<"l3 after erasing from first 7 till end :-"<<endl;
   for(auto X:l3)
      cout<<X<<" ";
   cout<<endl;
   cout<<"l1:- ";
   for(auto X:l1)
      cout<<X<<" ";
   cout<<endl;
   cout<<"Removing 4 drom l1:- ";
   l1.remove(4);
   for(auto X:l1)
      cout<<X<<" ";
   cout<<endl; // removes all the 4's ;

   //l1.remove_if();
   cout<<"l2:- ";
   for(auto X:l2)
      cout<<X<<" ";
   cout<<endl;

   l2.clear();
   cout<<"after clearin l2:- ";
   for(auto X:l2)
      cout<<X<<" ";
   cout<<endl;

   
   /*
   Remove if() requires predicate : predicate is a fn or callable object which return bool
   we can provide predicate using  lambda fn or fn defining 
   which will return val acc to our condn provided.
   */
   cout<<"l3 before :- ";
   for(auto X:l3)
     cout<<X<<" ";
   cout<<endl;
   cout<<"l3 after clearing  values <15 :- ";
   l3.remove_if([](int x){return x<15;});
   for(auto X:l3)
     cout<<X<<" ";
   cout<<endl;
   l3.sort();



   //operation's .
   cout<<"sorted l3:- ";
   for(auto X:l3)
     cout<<X<<" ";
   cout<<endl;
   l1.sort();
   l3.sort();
   cout<<"sorted l1:- ";
   for(auto X:l1)
     cout<<X<<" ";
   cout<<endl;
   l3.merge(l1);
   cout<<"L1 merged with l3 :- ";
   for(auto X:l3)
     cout<<X<<" ";
   cout<<endl;

   cout<<"L1 becomes empty :- ";
   for(auto X:l1)
     cout<<X<<" ";
   cout<<endl;

   // sort using predicate as descending order .
   /*
   #include <iostream>
   #include <forward_list>

   int main() {
      std::forward_list<int> flist = {30, 10, 20, 50, 40};

      std::cout << "Original list: ";
      for (int val : flist) {
         std::cout << val << " ";
      }
      std::cout << std::endl;

      // Sorting the list in descending order using a custom comparator
      flist.sort([](int a, int b) { return a > b; });

      std::cout << "Sorted list (descending): ";
      for (int val : flist) {
         std::cout << val << " ";
      }
      std::cout << std::endl;

      return 0;
   }
   
   */
   
   l3.unique();
   cout<<"Unque values l3:- ";
   for(auto X:l3)
      cout<<X<<" ";
   vector<int> v;
   int *a=new int[3];
   a[0]=10;
   v.insert(v.end(),a);
   








   return 0;
}