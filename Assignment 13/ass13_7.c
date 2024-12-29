# include<stdio.h>

int main() {
    int num,choice;
    float radius;
    while(1)
    {   
        printf("\n......................................\n");
        printf("Enter 1 for Factorial\n");
        printf("Enter 2 for checking Even or Odd\n");
        printf("Enter 3 for Area of circle\n");
        printf("Enter 4 for sum of first N natural no\n");
        printf("Enter 5 for Exit\n");
        
        printf("......................................\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                printf("enter Number:- ");
                scanf("%d",&num);
                if (num==0||num==1)
                {
                    printf("factorial of %d is 0",num);
                }
                else if(num<0)
                {
                    printf("INVALID\"%d\" factorial for negative Numbers",num);
                }
                else{
                    int i=num;
                    int sum=1;
                    while(i>=1){
                        sum=sum*i;
                        i--;
                    }
                    printf("Factorial of %d is \"%d\"",num,sum);
                }
                break;
            }
            case 2:
            {
                printf("enter number:- ");
                scanf("%d",&num);
                if(num%2==0&&num>0)
                {
                    printf("%d is Even Number");
                }
                else if(num<0)
                {
                    printf("INVALID INPUT %d NEGATIVE NUMBER",num);
                }
                else{
                    printf("%d is a ODD Number",num);
                }
                break;
            }
            case 3:
            {
                printf("Enter number");
                scanf("%f",&radius);
                printf("Area of circle of Radius %f is \"%.2f\"",radius,3.14*radius*radius);
                break;
            }
            case 4:
            {
                printf("Enter NO of terms:- ");
                scanf("%d",&num);
                if(num>0){
                    int i=num;
                    int sum=0;
                    while(i>0)
                    {
                      sum=sum+i;
                      i--;  
                    }
                    printf("sum of %d Natural no is %d ",num,sum);
                }
                else{
                    printf("Invalid choice!!!");
                }
                break;
            }
            default:
            {
                printf("%d is Invalid Input",choice);
            }
        }

        








        if (choice==5)
        {
            break;
        }
        
        
    }
    return 0;
}