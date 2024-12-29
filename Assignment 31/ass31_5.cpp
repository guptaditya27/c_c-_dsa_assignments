#include<iostream>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void all_primefac(int num)
{
   for(int i=2;i<=num;i++)
   {
       if(num%i==0)
       {
           if(is_prime(i))
            cout<<i<<" ";
       }
   }
}
int main()
{
    all_primefac(36);
    return 0;
}