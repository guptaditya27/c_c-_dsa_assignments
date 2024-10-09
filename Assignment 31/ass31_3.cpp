#include<iostream>
using namespace std;
void rotate(int[],int,int,int=1);
int main()
{
    int arr[]={32,29,40,12,70};
    int size=5;
    int n=2;
    rotate(arr,size,n,-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
void rotate(int arr[],int size,int n,int d)
{
    if(d==1)
    {
        while(n>0){
            
            int k= arr[0];
            for(int i=0;i<=size-2;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[size-1]=k;
            n--;
        }
    
    }
    else if(d==-1)
    {
        while(n>0)
        {
            int k=arr[size-1];
            for(int i=size-1;i>0;i--)
                arr[i]=arr[i-1];
            arr[0]=k;
            
            n--;
        }
    }
    else{
        cout<<"wrong input!!!";
    }
}