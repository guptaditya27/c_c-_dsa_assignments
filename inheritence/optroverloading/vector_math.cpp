#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>
#include<cmath>
class vector{
   private:
      double x,y,z;

   protected:

   public:
      vector(double=0.0,double=0.0,double=0.0);
      vector(const vector&);
      void print();
      void set_value(double X,double=0,double=0);
      vector& operator+=(vector &);
      vector& operator-=(vector &);
      vector& operator*=(double);
      bool operator==(vector &);
      double get_magnitude();
      vector& operator=(const vector&);
      bool operator!=(vector&);
      //vector& unit_vector();
      friend vector operator+(const vector&,const vector&);
      friend vector operator-(const vector&,const vector&);
      //friend vector operator+(const vector&,const vector&);
      
      

};
vector operator-(const vector&v1,const vector&v2){
   return vector(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z);
}
bool vector::operator!=(vector&V){
   if(x==V.x&&y==V.y&&z==V.z)
      return 0;
   return 1;
}
vector& vector::operator=(const vector&V){
      x=V.x;
      y=V.y;
      z=V.z;
   return *this;
}
vector operator+(const vector&v1,const vector&v2){
   return vector(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
}
vector::vector(const vector&V):x(V.x),y(V.y),z(V.z){}
double vector::get_magnitude(){
   return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}
vector& vector::operator*=(double X){
   this->x*=X;
   this->y*=X;
   this->z*=X;
   return *this;

}
bool vector::operator==(vector&V){
   if(this->x==V.x&&this->y==V.y&&this->z==V.z){
      return 1;
   }
   return 0;

}
vector& vector::operator+=(vector&V){
   this->x+=V.x;
   this->y+=V.y;
   this->z+=V.z;
   return *this;

}
vector& vector::operator-=(vector&V){
   this->x-=V.x;
   this->y-=V.y;
   this->z-=V.z;
   return *this;

}
void vector::set_value(double X,double Y,double Z){
   this->x=X;
   this->y=Y;
   this->z=Z;
}
vector::vector(double x,double y,double z):x(x),y(y),z(z){}
void vector::print(){
   cout << x << "i " << (y >= 0 ? "+ " : "- ") << abs(y) << "j "
   << (z >= 0 ? "+ " : "- ") << abs(z) << "k" << endl;
}
int main()
{
   vector v,k;
   v.print();
   v.set_value(1,-2);
   v.print();
   v*=-2;
   v.print();
   cout<<"magintude :- "<<v.get_magnitude()<<endl;
   vector Z=v;
   Z.print();
   k=Z;
   k.print();
   k=Z-v;
   k.print();

   return 0;
}