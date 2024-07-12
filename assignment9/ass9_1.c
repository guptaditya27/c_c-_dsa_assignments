// sum of first n natural no
// # include<stdio.h>

// int main() {
//     int n;
//     printf("enter no of terms");
//     scanf("%d",&n);
//     printf("\" sum of %d natural no is  \"%d\" ",n,n*(n+1)/2);
//     return 0;
// }


// using for loop
// # include<stdio.h>

// int main() {
//     int n,sum=0;
//     printf("enter no of terms");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("\" sum of %d natural no is  \"%d\" ",n,sum);
    
//     return 0;
// }



// using while loop
# include<stdio.h>

int main() {
    int n,sum=0;
    printf("enter no of terms ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("\" sum of %d natural no is  \"%d\" ",n,sum);
    
    return 0;
}