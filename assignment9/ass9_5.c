// # include<stdio.h>

// int main() {
//     int n,sum=0;
//     printf("enter number of terms:- ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++)
//     {
//         sum=sum+(i*i*i);
//     }
//     printf("\" sum of Cubes of %d Natural no is  \"%d\" ",n,sum);

//     return 0;
// }



// while loop se
# include<stdio.h>

int main() {
    int n,sum=0;
    printf("enter no of terms:- ");
    scanf("%d",&n);
    int i=0;
    while(i<=n)
    {
        sum=sum+(i*i*i);
        i++;
    }
    printf("\" sum of Cubes of %d Natural no is  \"%d\" ",n,sum);



    return 0;
}