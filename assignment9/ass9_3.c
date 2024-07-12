// # include<stdio.h>

// int main() {
//     int n,sum=0;
//     printf("enter no of terms ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=2*n-1)
//     {
//         sum=sum+i;
//         i+=2;
//     }
//     printf("\" sum of %d Odd no is  \"%d\" ",n,sum);
    
//     return 0;
// }



// for loop
# include<stdio.h>

int main() {
    int n,sum=0;
    printf("enter no of terms ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2)
    {
        sum=sum+i;
    }
    printf("\" sum of %d Odd no is  \"%d\" ",n,sum);
    
    return 0;
}