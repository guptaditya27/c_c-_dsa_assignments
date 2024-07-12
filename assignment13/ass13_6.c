# include<stdio.h>

int main() {
    int marks;
    printf("enter markss:- ");
    scanf("%d",&marks);
    if(marks>100||marks<0)
    {
        printf("invalid marks");
    }
    else{
        switch(marks)
        {
            case 90 ... 100:
            {
                printf("Grade A");
                break;
            }
            case 80 ... 89:
            {
                printf("Grade B");
                break;
            }
            case 70 ... 79:
            {
                printf("Grade C");
                break;
            }
            case 60 ... 69:
            {
                printf("Grade D");
                break;
            }
            case 50 ... 59:
            {
                printf("Grade E");
                break;
            }
            default:
            {
                printf("Grade F ");
            }
        }
    }
    return 0;
}