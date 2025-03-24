#include<iostream>
using namespace std;
#include<stdio.h>
template<class X>
void sort(X *arr,int size){
    for(int i=0;i<=size-1;i++){
        for(int j=0;j<=size-i-1;j++){
            if(arr[j]>arr[j+1]){
                X k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
}
int main()
{
   char arr[3]={'z','W','t'};
   sort(arr,3);
   cout<<arr[1];
    return 0;
}