#include<iostream>
using namespace std;
class item{
    private:
        int a,b;
    public:
        item();
        void setdata(int,int);
        void getdata();
        item greater(item);
        bool operator>(item);

};
bool item::operator>(item i){
    if(a+b>i.a+i.b)
        return 1;
    return 0;
}
item item::greater(item obj){
    if(a+b>obj.a+obj.b)
      return *this;
    return obj;

}
void item::getdata(){
    cout<<this->a<<" "<<this->b<<endl;
}
void item::setdata(int a,int b){
    this->a=a;
    this->b=b;
}
item::item(){
   a=0;
   b=0;
}
