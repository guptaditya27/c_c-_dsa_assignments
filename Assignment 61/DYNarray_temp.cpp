#include<iostream>
using namespace std;
#include<stdio.h>
template<class X>
class DynArray{
   private:
      X *ptr;
      int lastindex;
      int capacity;
   protected:
      void Double();
   public:
      DynArray();
      DynArray(int);
      ~DynArray();
      DynArray(DynArray &);
      void Create_Array(int);
      void append(X);
      void print();
      void clear();
      int get_size();
      int size();
      void sort(int=1);
      X& operator[](int);

   };

template<class X>
void DynArray<X>::clear(){
   if(ptr){
      delete []ptr;
      capacity=0;
      lastindex=-1;
   }
}
template<class X>
DynArray<X>::DynArray(DynArray&D){
   if(D.ptr==NULL){
      ptr=NULL;
      lastindex=-1;
      capacity=0;
   }
   else{
      ptr=NULL;
      capacity=D.capacity;
      lastindex=D.lastindex;
      ptr=new X[capacity];
      for(int i=0;i<=lastindex;i++)
         ptr[i]=D.ptr[i];
      
   }
}
template<class X>
DynArray<X>::~DynArray(){
   delete []ptr;
}
template<class X>
X& DynArray<X>::operator[](int index){
   static X a;
   try{
      if(ptr==NULL)
         throw 2;
      else if(index>size()-1||index<0)
         throw 1;
      return ptr[index];
   }
   catch(int e){
      if(e==1){
         cout<<"Invalid index Value !!"<<endl;
         return a;
      }
      else if(e==2){
         cout<<"Array Doesn't Exist !!"<<endl;
         return a;
      }
   }
}
template<class X>
void DynArray<X>::sort(int asc){
   
   try{
      if(ptr==NULL)
      throw 1;
      if(asc==1){
         for(int i=0;i<=size()-1;i++){
            for(int j=0;j<=size()-i-1;j++){
               if(ptr[j]>ptr[j+1]){
                  int k=ptr[j];
                  ptr[j]=ptr[j+1];
                  ptr[j+1]=k;
               }
            }
         }
      }
      else if(asc==-1){
         for(int i=0;i<=size()-1;i++){
            for(int j=0;j<=size()-i-1;j++){
               if(ptr[j]<ptr[j+1]){
                  int k=ptr[j];
                  ptr[j]=ptr[j+1];
                  ptr[j+1]=k;
               }
            }
         }
      }
      else{
         throw 2;
      }
   }
   catch(int e){
      if(e==1)
         cout<<"Array Doesn't Exist !!"<<endl;
      else if(e==2){
         cout<<"invalid Fn parameter !!"<<endl;
      }
   }
}
template<class X>
int DynArray<X>::size(){
   return lastindex;
}
template<class X>
int DynArray<X>::get_size(){
   cout<<"size= ";
   return capacity;
}
template<class X>
void DynArray<X>::print(){
   try{
      if(ptr==NULL)
         throw 1;
      cout<<"||";
      for(int i=0;i<=lastindex;i++)
         cout<<ptr[i]<<" ";
      cout<<"||"<<endl;
   }
   catch(int e){
      if(e==1){
         cout<<"Array Doesn't Exist !!"<<endl;
      }
   }
}
template<class X>
void DynArray<X>::Create_Array(int cap){
   try{
      if(ptr!=NULL)
         throw 2;
      else if(cap<=0)
         throw 1;
      capacity=cap;
      lastindex=-1;
      ptr=new X[capacity];

   }
   catch(int e){
      if(e==1){
         cout<<"Invalid Fn Parameter !!"<<endl;
      }
      else if(e==2){
         cout<<"Array Exist Alreaddy !!"<<endl;
      }
   }
}
template<class X>
void DynArray<X>::Double(){
   X *n=new X[capacity*2];
   for(int i=0;i<=lastindex;i++){
      n[i]=ptr[i];
   }
   delete []ptr;
   ptr=n;
   capacity*=2;

}
template<class X>
void DynArray<X>::append(X a){
   try{
      if(ptr==NULL)
         throw 1;
      if(lastindex==capacity-1)
         Double();
      lastindex++;
      ptr[lastindex]=a;
   }
   catch(int e){
      if(e==1){
         cout<<"Array Doesn't Exist !!"<<endl;
      }
   }
}
template<class X>
DynArray<X>::DynArray(int cap){
   try{
      if(cap<=0)
         throw 1;
      else{
         capacity=cap;
         lastindex=-1;
         ptr=new X[capacity];

      }
   }
   catch(int e){
      if(e==1){
         lastindex=-1;
         capacity=0;
         ptr=new X[capacity];
         cout<<"Invalid Fn Parameter !!"<<endl;
      }
   }
}
template<class X>
DynArray<X>::DynArray(){
   ptr=NULL;
   lastindex=-1;
   capacity=0;
}
int main()
{
   DynArray<int>D1;
   D1.Create_Array(3);
   D1.append(67);
   D1.append(68);
   D1.append(70);
   cout<<D1.get_size();
   D1.append(95);
   D1.append(97);
   //cout<<D1.get_size();
   D1.sort(-1);
   D1.print();
   cout<<endl;
   D1[50]=-1;
   D1.print();

   return 0;
}