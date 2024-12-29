#include<iostream>
using namespace std;
int Hcf(int num1,int num2){
    int i,j;
    i=num1>num2?num1:num2;// big no
    j=num1<num2?num1:num2;// small no
    while(1)
    {
        if(i%j==0)
            return j;
        int k=i;
        j=i%j;
        i=k;
    }
    return 1;
}
int main()
{
   cout<<Hcf(10,12);
   return 0;
}