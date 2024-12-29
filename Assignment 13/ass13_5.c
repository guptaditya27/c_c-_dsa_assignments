# include<stdio.h>

int main() {
    int var;
    printf("enter value");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
        {
            printf("good");
            break;
        }
        case 2:
        {
            printf("Better");
            break;
        }
        case 3:
        {
            printf("Best");
            break;
        }
        default:
        {
            printf("INVALID!!!!");
        }

    }
    return 0;
}