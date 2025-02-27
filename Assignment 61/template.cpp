#include<iostream>
using namespace std;
#include "item.cpp"

/* function overloading
int big(int a,int b){
   if(a>b)
      return a;
   return b;
}
float big(float a,float b){
   if(a>b)
      return a;
   return b;
}
item big(item a,item b){
   if(a>b)
      return a;
   return b;
}
*/
/*template function*/
template <typename X>
X big(X a,X b){
   if(a>b)
      return a;
   return b;
}

int main()
{
   item k,J;
   k.setdata(1,2);
   J.setdata(5,-1);
   (big(k,J)).getdata();
   return 0;
}