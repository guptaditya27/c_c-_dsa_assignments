#include<iostream>
using namespace std;
#include<stdio.h>
class Fraction{
    private:
        long Num,den;
    protected:
        void simplify();
    public:
        Fraction(long n=0,long d=1):Num(n),den(d){
            simplify();
        }
        void print();
        

};
void Fraction::print()
{
    cout<<Num<<"/"<<den<<endl;
}
void Fraction::simplify()
{
    try{
        // various cases to handle 
        /*
            1. if num =0; & den !=0;
            2. if num =0 &den ==0;
            3. if num -ve; & den +;
            4. if num+ve den -ve;
            5. if num-ve & den -ve;
            6. 

            if 
        */
        
        
        if(den==0&&Num==0)
            throw 1;
        else if(Num=0&&den!=0)
        {
            
        }
            
        else{
            int j=Num>den?den:Num;
            for(int i=2;i<=j;i++)
            {
                while(Num%i==0&&den%i==0)
                {
                    Num/=i;
                    den/=i;
                }

            }
        }
    }
    catch(int e)
    {
        if(e==1)
            cout<<" ";
        else if(e==2)
            cout<<" ";

    }
}
int main()
{
   Fraction F(0,2);
   F.print();
   return 0;
}