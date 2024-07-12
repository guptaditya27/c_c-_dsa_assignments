// question 1

// # include<stdio.h>
// float areacircle(float);
// int main() {
// // creating variables
// float radius;
// printf("enter radius of circle");
// scanf("%f",&radius);
// printf("\nArea of circle of radius %.3f is:-  %.2f",radius,areacircle(radius));

//     return 0;
// }
// float areacircle(float radius)
// {
//     return 3.14*(radius*radius);
// }



//question 2
// # include<stdio.h>
// float SI(float,float,int);
// int main() {
//     float principal;float rate;int time;
//     printf("enter principal value:-");
//     scanf("%f",&principal);
//     printf("\nenter rate value:-");
//     scanf("%f",&rate);
//     printf("\nenter time value:-");
//     scanf("%d",&time);
//     printf("simple intrest for principal %f for time %d at rate %f is:- %f",principal,time,rate,SI(principal,time,rate));


//     return 0;
// }
// float SI(float p,float r,int t)
// {
//     return (p*r*t)/100;
// }






// //question 3
// # include<stdio.h>
// int eveodd(int);
// int main() {
//     int number;
//     printf("enter number to check");
//     scanf("%d",&number);
//     if(eveodd(number)==1)
//     {
//         printf("\n%d is even",number);

//     }
//     else
//         printf("\n%d is odd",number);
//     return 0;
// }
// int eveodd(int a)
// {
//     if(a%2==0)
//     {
//         return 1;
//     }
//     else 
//         return 0;
// }





// //question 4
// //print fist n natural no(tsrn)
// # include<stdio.h>
// int print(int);
// int main() {
//     int terms;
//     printf("enter no of terms:- ");
//     scanf("%d",&terms);
//     print(terms);

    
//     return 0;
// }
// int print(int a)
// {   int i=1;
//     while(i<=a)
//     {
//         printf("%d",i);
//         printf("\n");
//         i++;
//     }
// }






// //question 5
// //first n odd numbers
// # include<stdio.h>
// int odd(int);
// int main() {
//     int n;
//     printf("enter no of terms:- ");
//     scanf("%d",&n);
//     odd(n);
//     return 0;
// }
// int odd(int a)
// {
//   int i=1;
//   while(i<=2*a-1)
//   {
//     printf("%d\n",i);
//     i+=2;
//   }  
// }



//question 6
//factorial of no (tsrs)
// # include<stdio.h>

// int main() {
//    int a=5;int i=5;
//    while(a>1)
//    {
//     i=i*(a-1);
//     a--;
//    }
//    printf("%d",i);

//     return 0;
// }


//question 7
//combination
// # include<stdio.h>
// int combination(int,int);
// int main() {
//     int n,r;
//     printf("enterno of terms:-");
//     scanf("%d",&n);
//     printf("enterno of terms to select:-");
//     scanf("%d",&r);
//     printf("no of combinatins possible are:- %d",combination(n,r));

//     return 0;
// }
// int combination(int n,int r)
// {
//     int i=n,j=r,k=(n-r);
//     while(n>1)
//     {
//         i=i*(n-1);
        
//         n--;}
//     int w=k;
//     while(r>1)
//     {
//         j=j*(r-1);
//         r--;
//     }
//     while(k>1)
//     {
//         w=w*(k-1);
//         k--;
//     }
//     return (i)/(w*j);
// }





//question 8
//permutations
// # include<stdio.h>
// int permutations(int,int);
// int main() {
//     int n,r;
//     printf("enterno of terms:-");
//     scanf("%d",&n);
//     printf("enterno of terms to arrange:-");
//     scanf("%d",&r);
//     printf("no of permutations possible are:- %d",permutations(n,r));

//     return 0;
// }
// int permutations(int n,int r)
// {
//     int i=n,j=r;
//     while(n>1)
//     {
//         i=i*(n-1);
        
//         n--;}
    
//     while(r>1)
//     {
//         j=j*(r-1);
//         r--;
//     }
//     return i/j;

// }





//question 8
//given no contains a given digit or not



















// assignment 15
//question 1
//lcm two no
// # include<stdio.h>
// int lcm(int, int);
// int main() {
//    int x,y;
    
//     printf("enter two numbers");
//     scanf("%d %d",&x,&y);
//     printf("lcm of %d, %d is:- %d",x,y,lcm(x,y));
    
//     return 0;
// }
// int lcm(int x,int y)
// {   int flag=0,l=1;
//     int i=2;
//     while(x>1||y>1)
//     {
//         if (x%i==0)
//         {
//             x=x/i;
//             flag=1;
//         }
//         else if (y%i==0)
//         {
//             y=y/i;
//             flag=1;
//         }
//         else if(flag==1)
//         {
//             l=l*i;
//             flag=0;
//         }
//         else
//         {i++;}
//     }

// return i; 
// }



//question 2
//hcf of two no




