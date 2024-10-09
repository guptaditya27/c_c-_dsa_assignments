//highest value digit in given number
#include<iostream>
using namespace std;
int highest_value(int);
int calculate_size(int);
int main()
{
    int num;
    cout<<"Enter Number:- ";
    cin>>num;
    int k=highest_value(num);
    cout<<"Highest value Digit in "<<num<<" is "<<k;
    return 0;
}
int highest_value(int digit)
{
    int highest_digit;
    int size=calculate_size(digit);
    highest_digit=digit%10;
    for(int i=0;i<size;i++)
    {
        if(digit%10>=highest_digit)
            highest_digit=digit%10;
        digit/=10;
        
    }
    return highest_digit;

}
int calculate_size(int digit)
{
    int size=0;
    while(digit>0)
    {
        digit/=10;
        size++;
    }
    return size;
}