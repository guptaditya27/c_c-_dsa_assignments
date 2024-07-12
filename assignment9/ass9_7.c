// # include<stdio.h>

// int main() {
//     int n;
//     printf("enter number:- ");
//     scanf("%d",&n);
//     int count =0;
//     int k=n;
//     while(k>0)
//     {
//         k=k/10;
//         count++;
//     }
//     printf("\"%d\" is a \"%d\" digit Number",n,count);
//     return 0;
// }


// for loop
# include<stdio.h>

int main() {
    int n;
    printf("enter number:- ");
    scanf("%d",&n);
    int count =0;
    for (int k = n; k>0; k=k/10)
    {
        count++;
    }
    
    printf("\"%d\" is a \"%d\" digit Number",n,count);
    return 0;
}