// # include<stdio.h>

// int main() {
//     int n,fact=1;
//     printf("Enter number for factorial:- ");
//     scanf("%d",&n);
//     if(n==0||n==1)
//     {
//         printf("factorial of \"%d\" is 1",n);
//     }
//     else{
//         int i=n;
//         while(i>0)
//         {
//             fact=fact*i;
//             i--;
//         }
//         printf("factorial of \"%d\" is %d",n,fact);

//     }
//     return 0;
// }




// using for loop
# include<stdio.h>

int main() {
    int n,fact=1;
    printf("Enter number for factorial:- ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("factorial of \"%d\" is 1",n);
    }
    else{
        for(int i=n;i>0;i--)
        {
            fact=fact*i;
        }
        printf("factorial of \"%d\" is %d",n,fact);

    }
    return 0;
}