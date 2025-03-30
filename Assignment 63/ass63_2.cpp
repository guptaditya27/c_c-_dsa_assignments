#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<stdio.h>
int main()
{
    vector<float> v1;
    v1.push_back(1.25f);
    v1.insert(v1.end(),2.33f);
    v1.insert(v1.end(),3.414f);
    try{
        for(int i=0;i<=v1.size()-1;i++)
            cout<<v1.at(i)<<" ";
        cout<<endl;
    }
    catch(out_of_range e){
        cout<<e.what()<<endl;
    }

    return 0;
}