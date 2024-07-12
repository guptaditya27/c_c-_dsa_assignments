// # include<stdio.h>

// int main() {
//     int root1,root2,a,b,c;
//     printf("enter cofficients of \"x^2\" \"x\" \"constant\":-");
//     scanf("%d %d %d",&a,&b,&c);
//     // deg 2nd quad eqn is form ax^2+bc+c=0 
//     root1=(-b+((b*b)-4*(a*c)))/2*a;
//     root2=(-b-((b*b)-4*(a*c)))/2*a;
    
    
//     return 0;
// }

// this approach should continued later!!!!










# include<stdio.h>

int main() {
    int D,a,b,c;
    printf("enter cofficients of \"x^2\" \"x\" \"constant\":-");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if (D>0)
    {
        printf("roots of eqn \"%dX^2+%dX+%d\" are Real and Distinct",a,b,c);

    }
    else if (D==0)
    {
        printf("roots of eqn \"%dX^2+%dX+%d\" are real and equal",a,b,c);
        
    }
    else if (D<0)
    {
        printf("roots of eqn \"%dX^2+%dX+%d\" are Imaginary",a,b,c);
        
    }
    else{
        printf("Not valid INput Provided");
    }
    
    return 0;
}
