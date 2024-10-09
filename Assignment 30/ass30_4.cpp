#include<iostream>
using namespace std;
void pascal_triangle();
void pascal_line(int);
int factorial(int);
int ncr(int,int);
int main()
{
    //pascal_triangle();
    cout<<endl;
    pascal_line(1);
    return 0;
}
void pascal_triangle()
{
    int i,j,lines;

    cout<<"Enter no of lines:-  ";
    cin>>lines;
    for(i=1;i<=lines;i++)
    {
       int k=1,r=0;
       for(j=1;j<=lines*2-1;j++)
       {
        if(j>=(lines+1)-i&&j<=(lines-1)+i&&k)
        {
            cout<<ncr(i-1,r);
            r++;
            k=0;
        }
        else{
            cout<<" ";
            k=1;
        }
       }
       cout<<endl;
    }
}
int factorial(int num)

{
    if(num==1||num==0)
        return 1;
    else{ 
        return num*factorial(num-1);
    }
}
int ncr(int n,int r)
{
    int k=factorial(n)/(factorial(n-r)*factorial(r));
    return k;
}
void pascal_line(int line_no)
{
    int r=0;
    //int i=line_no;
    while(r<=line_no){
        cout<<ncr(line_no-1,r)<<" ";
        r++;
    }
}
