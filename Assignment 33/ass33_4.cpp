#include<iostream>
using namespace std;
class Testresult
{
    private:
        int roll_no,right,wrong,net_score;
        static int right_weightage,wrong_weightage;
    public:
        void set_roll_no(int r) {roll_no=r;}
        void right(int r) {right=r;}
        void wrong(int r) {wrong=r;}
        void setnet_score(int n) {net_score=n;}
        int getroll_no() {return roll_no;}
        int getright() {return right;}
        int getwrong() { return wrong;}
        int getnetscore() {return net_score;}
        static void setright_weightage(int w) {right_weightage=w;}
        static void setwrong_weightage(int w) {wrong_weightage=w;}
        static int getright_weightage() {return right_weightage;}
        static int getwrong_weightage() {return wrong_weightage;}



};
int Testresult::right_weightage;
int Testresult::wrong_weightage;

int main()
{
   
   Testresult result[5];
   return 0;
}
