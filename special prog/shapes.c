# include<stdio.h>

int main() {
    int choice;
    printf("<<<<<<  Enter no shape You Want to create >>>>");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                       printf("* "); 
                    }
                    printf("\n");
                    
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 2:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines;j++)
                    {
                        if(j>=(lines+1)-i)
                        {
                            printf("* ");
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 3:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines;j++)
                    {
                        if(j<=(lines+1)-i)
                        {
                            printf("*");
                        }
                        
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 4:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines;j++)
                    {
                        if(j>=i)
                        {
                            printf("* ");
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 5:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        printf("%d ",j);
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 6:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1,k=i;j<=i;j++)
                    {
                        printf("%d ",k);
                        k--;
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 7:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    char k='A';
                    for(int j=1;j<=lines;j++)
                    {
                        if(j>=i)
                        {
                            printf("%c ",k);
                            k++;
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 8:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                int k=1;
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines;j++)
                    {
                        if(j<=i)
                        {
                            printf("%d ",k);
                            k++;
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 9:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    int k=64+i;
                    for(int j=1;j<=lines;j++)
                    {
                        if(j>=i)
                        {
                            printf("%c ",k);
                            k++;
                        }
                        else{
                            printf("  ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 10:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines;j++)
                    {
                        if(i==lines||i==1||j==1||j==lines)
                        {
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 11:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j>=(lines+1)-i&&j<=(lines-1)+i)
                        {
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 12:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j>=i&&j<=(lines*2)-i)
                        {
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 13:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
               
                for(int i=1;i<=lines;i++)
                {
                    int k=1;
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        
                        if(j>=(lines+1)-i&&j<=(lines-1)+i)
                        {
                           
                           if(k)
                           {
                            printf("*");
                            
                           }
                           else{
                            printf(" ");
                           }
                           k=1-k; 
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 14:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    int k=1;
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j>=(lines+1)-i&&j<=(lines-1)+i)
                        {
                            printf("%d",k);
                            j<lines?k++:k--;
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 16:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    char k='A';
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j>=i&&j<=(lines*2)-i)
                        {
                            printf("%c",k);
                            j<lines?k++:k--;
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 15:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    char k='A';
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j>=i&&j<=(lines*2)-i)
                        {
                            printf("%c",k);
                            k++;
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 17:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(i)
                        {}
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 18:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j<=(lines+1)-i||j>=(lines-1)+i)
                        {
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 19:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    int k=1;
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j<=(lines+1)-i||j>=(lines-1)+i)
                        {
                            printf("%d",k);
                        }
                        else{
                            printf(" ");
                        }
                        j<lines?k++:k--;
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }
        case 20:
        {
            
            int lines;
            printf("Enter no of lines:- ");
            scanf("%d",&lines);
            if(lines>0)
            {
                for(int i=1;i<=lines;i++)
                {
                    char k='A';
                    for(int j=1;j<=lines*2-1;j++)
                    {
                        if(j<=(lines+1)-i||j>=(lines-1)+i)
                        {
                            printf("%c",k);
                        }
                        else{
                            printf(" ");
                        }
                        j<lines?k++:k--;
                    }
                    printf("\n");
                }


            }
            else{
                printf("Positive iNPUT eXPECTED");
            }
            break;
        }

    default:
    {
        printf("Wrong INput Choice ");
    }
    }

    return 0;
}