#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        void setradius(int=1);
        void getradius();
        float area();
        float circumference();
};
int main()
{
    Circle c;
    c.setradius(5);
    c.getradius();
    cout<<c.area()<<endl;
    cout<<c.circumference()<<endl;
    return 0;
}
void Circle::setradius(int r)
{
    radius=r;
}
void Circle::getradius()
{
    cout<<radius<<endl;
}
float Circle::area()
{
    return 3.14*radius*radius;
}
float Circle::circumference()
{
    return 2*3.14*radius;
}