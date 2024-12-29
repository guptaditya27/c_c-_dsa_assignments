# include<stdio.h>

int main() {
    int n,year,df=29,dfn=28,de=30,dod=31;
    printf("enter year :- ");
    scanf("%d",&year);
    printf("enter Month Number :- ");
    scanf("%d",&n);
    if ((year%4==0&&year%100!=0||year%400==0)&& n==2)
    {
        printf("\"%d\"year is a leap year",year);
        printf("\nDays in %d Month of yr \"%d\" are \"%d\"",n,year,df);
        

    }
    else{
        //printf("\"%d\"year is not a leap year\n",year);
        if(n==1||n==3||n==5||n==7||n==8||n==12||n==10)
        {
            printf("Days in %d Month of yr \"%d\" are \"%d\"",n,year,dod);
        }
        else if(n==4||n==6||n==9||n==11)
        {
            printf("Days in %d Month of yr \"%d\" are:- \"%d\"",n,year,de);
        }
        else{
            printf("Days in %d Month of yr \"%d\" are:- \"%d\"",n,year,dfn);

        }
    }
    

    return 0;
}