#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<stdio.h>
bool is_prime(int);
void delete_prime(vector<int> &v){
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end()){
        if(is_prime(*it))
            it=v.erase(it); // erse automatically it++ kar deta hai..
        else{
            it++;
        }
    }

}
bool is_prime(int val){
    int i=2;
    if(val==0||val<0||val==1)
        return 0;
    while(i<val){
        if(val%i==0)
            return 0;
        i++;
    }
    return 1;
}
int main()
{
   vector<int> b={2,5,4,14,3,13,12,13,26};
   cout<<"Before removing prime No :- "<<endl;
    for(auto x:b){
        cout<<x<<" ";
    }
    cout<<endl;
    delete_prime(b);
    cout<<"After Removing Prime no :- "<<endl;
    for(auto x:b){
        cout<<x<<" ";
    }
    return 0;
}