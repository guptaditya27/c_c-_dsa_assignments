# include<stdio.h>
float simple_intrest(float,float,float);
float simple_intrest(float x,float y, float z)
{
    return (x*y*z)/100;
}
int main() {
    float p,r,t;
    printf("enter principal");
    scanf("%f",&p);
    printf("enter rate of intrest ");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);
    printf("simple intrest is %.2f",simple_intrest(p,r,t));
    return 0;
}