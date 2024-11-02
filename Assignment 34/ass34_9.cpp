#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
class Room{
    private:
        int room_no;
        char room_type[10];
        bool is_Ac;
        int price;
    public:
        Room();
        void Display();
};
Room::Room()
{
   cout<<"Enter Room No"; 
   cin>>room_no;
   cout<<"Room type:- ";
   cin.ignore();
   cin.getline(room_type,10);
   cout<<"Is _AC:- ";
   cin>>is_Ac;
   cout<<"Input Price:- ";
   cin>>price;



}
void Room::Display()
{
    cout<<endl<<endl;
    cout<<"Room No:- "<<room_no<<endl;
    cout<<"Room Type :- "<<room_type<<endl;
    cout<<"Is Ac "<<(is_Ac?"Yes":"NO")<<endl;
    cout<<"Price :-"<<price<<endl;
}
int main()
{
   Room R;
   R.Display();
   return 0;
}