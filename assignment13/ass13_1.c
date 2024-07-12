# include<stdio.h>

int main() {
    int month,year;
    int leap=0;
    printf("enter year:- ");
    scanf("%d",&year);
    printf("enter month :- ");
    scanf("%d",&month);
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        if(month==2)
        {
            month=13;
        }
        leap=1;
    }
    switch(month)
    {
        case 1:
        {
            if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days january 31");
            break;
        }
        case 2:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days February 28");
            break;
        }
        case 3:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days March 31");
            break;
        }
        case 4:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days April 30");
            break;
        }
        case 5:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days May 31");
            break;
        }
        case 6:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days June 30");
            break;
        }
        case 7:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days July 31");
            break;
        }
        case 8:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days August 31");
            break;
        }
        case 9:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days Sepetember 30");
            break;
        }
        case 10:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days October 31");
            break;
        }
        case 11:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days Novemver 30");
            break;
        }
        case 12:
        {
             if(leap==1)
            {
                printf("\"%d\" is leap year\n",year);
            }
            printf("Days December 31");
            break;
        }
        case 13:
        {
            printf("Days February 29\n");
            printf("\"%d\" is leap year",year);
            break;
        }
        
    }
    return 0;
}