#include<iostream>
using namespace std;
class Cuboid
{
   private:
      float length,breadth,height;
   public:
      void set_data(int,int,int);
      Cuboid():length(0),breadth(0),height(0)
      {}
      void show_data()
      {
         cout<<"length="<<length<<" breadth="<<breadth<<" height="<<height<<endl;
      }

      
      
      
};
void Cuboid::set_data(int a,int b,int c)
{
   a=length,b=breadth,c=height;
}
int main()
{
   Cuboid c;
   c.show_data();
   return 0;
}