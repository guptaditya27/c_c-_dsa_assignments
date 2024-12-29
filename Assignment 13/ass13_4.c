# include<stdio.h>

int main() {
    int choice;
    int l,b,h;
    while(1)
    {
        printf(".................................................\n");
        
        printf("Enter 1 for isoseles triangle test test\n");
        printf("Enter 2 for right angle triangle\n");
        printf("Enter 3 for Equilateral triangle test\n");
        printf("Enter 4 for Quit\n");
    
        printf("\n.................................................\n");
        scanf("%d", &choice);
        if (choice==4)
        {
            printf("Quitting the program .........");
            break;
        }
        else{
            switch(choice)
            {
                case 1:
                {
                    printf("INPUT lengths of sides:- ");
                    scanf("%d %d %d",&l,&b,&h);
                    // for isoseles triangle
                    /*
                    if two sides are of eequal length
                    */
                    if (l==b||b==h||l==h)
                    {
                        printf("\"%d %d %d\" forms a isosceles triangle ",l,b,h);
                    }
                    else{
                        printf("\"%d %d %d\" doesn't forms a isosceles triangle ",l,b,h);

                    }
                    break;
                    
                }
                case 2:
                {
                    printf("INPUT lengths of sides:- ");
                    scanf("%d %d %d",&l,&b,&h);
                    if ((l * l) + (b * b) == (h * h) || (l * l) + (h * h) == (b * b) || (b * b) + (h * h) == (l * l)) {
                        printf("%d %d %d a right-angled triangle!\n",l,b,h);
                    } 
                    else {

                        printf("\"%d %d %d\" doesn't forms a Righr angled triangle ",l,b,h);
                    }
                    break;


                    
                }
                case 3:
                {
                    printf("INPUT lengths of sides:- ");
                    scanf("%d %d %d",&l,&b,&h);
                    // for equilateral triangle all sides equal length
                    if(l==b&&b==h&l==h)
                    {
                        printf("\"%d %d %d\" forms a Equilateral triangle ",l,b,h);

                    }
                    else{
                        printf("\"%d %d %d\"  doesn't forms a Equilateral triangle ",l,b,h);

                    }
                    break;
                    
                }

            }
            
    
        }
    }
    return 0;
}