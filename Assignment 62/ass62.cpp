#include<iostream>
using namespace std;
#include<stdio.h>
#include<array>
#include<algorithm>

int main()
{
   array<int,5>a={10,11,12,13,14};
   array<float,5>b={10.32,11.56,23.14,11.22,20};
   double averege=0;
   array<float,5>::iterator it;
   for(it=b.begin();it!=b.end();it++){
      averege+=*it;
   }
   averege/=b.size();
   cout<<"Averege of array :- "<<averege<<endl;

   array<int ,5>::reverse_iterator rt;
   cout<<"Array from right to left : - ";
   for(rt=a.rbegin();rt!=a.rend();rt++){
      cout<<*rt<<" ";
   }

   array<int,10>c;
   cout<<"Input 10 Elemets :- "<<endl;
   int i=0;
   while(i<=9){
      cin>>c[i];
      i++;
   }
   array<int,10>::iterator it1;
   for(it1=c.begin();it1!=c.end();it1++){
      cout<<*it1<<" ";
   }
   cout<<"Greatest Element :- "<<*max_element(c.begin(),c.end());
   sort(c.begin(),c.end());
   for(auto X:c)
      cout<<X<<" ";
   cout<<endl;



   

   return 0;
}