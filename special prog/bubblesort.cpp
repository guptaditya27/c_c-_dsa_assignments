#include<iostream>
using namespace std;
int main()
{
   int arr1[7]={17,3,21,2,31,4,41};
   int arr2[7]={17,3,21,2,31,4,41};
   int arr3[6]={34,12,45,15,11,55};
   
   cout<<"Simple Bubble Sort :- "<<endl<<endl;
   for(int i=0;i<7;i++){
        for(int j=0;j<=6;j++){
            if(arr1[j]>arr1[j+1]){
                int k=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=k;
            }
            cout<<"arr "<<i << j<<" ";
            for(int i=0;i<7;i++)
                cout<<arr1[i]<<" ";
            cout<<endl;
        }
    }
    cout<<"Modified Bubble Sort :- "<<endl<<endl;

    for(int i=0;i<7;i++){
        for(int j=0;j<=6-i;j++){
            if(arr2[j]>arr2[j+1]){
                int k=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=k;
            }
            cout<<"arr "<<i << j<<" ";
            for(int i=0;i<7;i++)
                cout<<arr2[i]<<" ";
            cout<<endl;
        }
    }

    cout<<" more Modified Bubble Sort :- "<<endl<<endl;

    for(int i=0;i<6;i++){
        int swap=0;
        for(int j=0;j<6-i;j++){
            if(arr3[j]>arr3[j+1]){
                int k=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=k;
                swap=1;
            }
            cout<<"arr "<<i << j<<" ";
            for(int i=0;i<6;i++)
                cout<<arr3[i]<<" ";
            cout<<endl;
        }
        if(swap==0)
            break;
    }
    return 0;
}