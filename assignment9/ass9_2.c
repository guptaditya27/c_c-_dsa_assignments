// sum even natural no

// # include<stdio.h>

// int main() {
//     int n,sum=0;
//     printf("enter no of terms ");
//     scanf("%d",&n);
//     for(int i=2;i<=2*n;i+=2)
//     {
//         sum=sum+i;
//     }
//     printf("\" sum of %d Even no is  \"%d\" ",n,sum);
    
//     return 0;
// }



// while loop
# include<stdio.h>

int main() {
    int n,sum=0;
    printf("enter no of terms ");
    scanf("%d",&n);
    int i=2;
    while(i<=2*n)
    {
        sum=sum+i;
        i+=2;
    }
    printf("\" sum of %d Even no is  \"%d\" ",n,sum);
    
    return 0;
}