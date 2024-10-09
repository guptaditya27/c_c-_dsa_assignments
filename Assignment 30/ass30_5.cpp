#include<iostream>
using namespace std;
void fibonacci_series(int);
bool fibo_term(int);
void fibo(int,int,int);
int main()
{
   //fibonacci_series(10);
   //fibo(-1,1,10);
   cout<<fibo_term(25);
   return 0;
}
void fibonacci_series(int term)
{
    int t1=-1,t2=1;
    for(int i=0;i<term;i++)
    {
        int t3=t1+t2;
        cout<<" "<<t3;
        int k=t3;
        t1=t2;
        t2=k; 
    }
}
void fibo(int t1,int t2,int term)
{
    int t3;
    while(term>0)
        t3=t1+t2;
        cout<<" "<<t3;
        int k= t2;
        t2=t3;
        t1=t2;
        term--;
        fibo(t1,t2,term);
    if(term==0)
    {
        return;
    } 
    


}
bool fibo_term(int search_term)
{
    int term=2*search_term, t1=-1,t2=1;
    for(int i=0;i<term;i++)
    {
        int t3=t1+t2;
        while(t3<=search_term){
            if(t3==search_term)
                return true;
            //cout<<" "<<t3;
            int k=t3;
            t1=t2;
            t2=k;
        }
        return false;
        
    }
}