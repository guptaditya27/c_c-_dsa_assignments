// # include<stdio.h>

// int main() {
//     int n,sum=0;
//     int k;
//     printf("enter no of terms ");
//     scanf("%d",&n);
//     k=n;
//     int i=k;
//     while(k>0){
//         sum=sum+(i*i);
//         i--;
//         k--;
//     }
//     printf("\" sum of Squares of %d Natural no is  \"%d\" ",n,sum);

//     return 0;
// }   


//for loop
# include<stdio.h>

int main() {
    int n,sum=0;
    printf("Enter no of terms:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("\" sum of Squares of %d Natural no is  \"%d\" ",n,sum);

    return 0;
}