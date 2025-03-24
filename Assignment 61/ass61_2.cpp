#include<iostream>
using namespace std;
template<class X>
void print(X *arr,int ind){
    int i=0;
    while(i<=ind-1){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

}
int main()
{
   float a[5]={1.2,2,3,4,5};
   char b[3]={'A','A','A'};
   print(a,5);
   print(b,3);

    return 0;
}