# include<stdio.h>
float area_circle(int);
float area_circle(int x)
{
   return 3.14*x*x; 
}
int main() {
    int r=15;
    printf("%.2f",area_circle(r));
    return 0;
}