#include<iostream>
using namespace std;
class Customer
{
    private:
        double cust_id;
        char name[30];
        char email[100];
        double mobile;

    public:
        Customer(double a)
        {
            Customer::cust_id=a;
            
        }
        Customer()
        {
            Customer::cust_id=1;
        }

        void set_cust_id(double);
        void set_name();
        void set_email();
        void set_mobile(double);
        double get_cust_id();
        int [] get_name();
        double get_mobile();




};

int main()
{
   Customer c2(101),c1;
   cout<<c1.get_cust_id()<<endl;
   cout<<c2.get_cust_id();

   return 0;
}
void Customer::set_cust_id(double n)
{
    cust_id=n;
}
double Customer::get_cust_id()
{
    return cust_id;
}
