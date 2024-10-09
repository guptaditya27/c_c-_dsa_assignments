# include<stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
struct Time Input()
{
    struct Time T;
    printf("Enter Hour , MINUTE , Second :- ");
    scanf("%d %d %d",&T.hour,&T.minute,&T.second);
    if(T.minute>=60)
    {
        T.hour+=T.minute/60;
        T.minute=T.minute%60;
    }
    if(T.second>=60)
    {
        T.minute+=T.second/60;
        T.second=T.second%60;
    }
    return T;
}
void Display_time(struct Time T)
{
    printf("\n%d:%d",T.hour,T.minute);
    printf("\n");
    
}
struct Time Difference(struct Time *t1,struct Time *t2)
{
    struct Time t3;
    t3.hour=(t1->hour)-(t2->hour);
    t3.minute=t1->minute-t2->minute;
    t3.second=t1->second-t2->second;
    return t3;

}

int main() {
    struct Time t1,t2,t3;
    t1=Input();
    Display_time(t1);
    t2=Input();
    Display_time(t2);
    t3=Difference(&t1,&t2);
    Display_time(t3);

    return 0;
}