#include<iostream>
using namespace std;
void volume(double,double);
void volume(double,double,double);
void volume(double);
int main()
{
   volume(5);
    volume(5,6);
    volume(3,4,5);
   return 0;
}
void volume(double radii){
    cout<<"Volumer of Sphere is :- "<<4*(3.14)*(radii*radii*radii)/3<<endl;
}
void volume(double radii,double heig){
    cout<<"Volume of Cone is :- "<<0.33333*(3.14*((radii*radii)*heig))<<endl;
}
void volume(double len,double bre,double heigh)
{
    cout<<"volume of Cuboid :"<<len*bre*heigh<<endl;
}