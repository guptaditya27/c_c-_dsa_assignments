# include<stdio.h>

int main() {
    int ch;
    printf("enter day Number:- ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("\" “Embrace the new week with enthusiasm. Your attitude determines your altitude.\"");
            break;
        }
        case 2:
        {
            printf(" \"Make today count; it’s another chance to make progress.”\"");
            break;
        }
        case 3:
        {
            printf("Wednesdays are like coffee—strong and necessary.”");
            break;
        }
        case 4:
        {
            printf("“Thursday is the bridge to the weekend. Keep pushing!”");
            break;
        }
        case 5:
        {
            printf("“TGIF: Thank Goodness It’s Friday! Celebrate your wins.”");
            break;
        }
        case 6:
        {
            printf("“Make memories today; they’ll be your Sunday stories.”");
            break;
        }
        case 7:
        {
            printf("Sundays are for self-care and gratitude.”");
            break;
        }
        default:
        {
            printf("WRONG input Entered !!!!");
        }

    }
    return 0;
}