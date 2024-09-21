#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to View Corresponding Message = ");
    ch = getch();

    if (ch == 'A' || ch == 'a')
       {
           printf("\n Welcome");
       }
       else if (ch == 'B' || ch == "b")
        {
            printf("\n Good Bye");
        }
        else if (ch == 'C' || ch == 'c')
        {
            printf("\n Have a Nice Day");
        }
        else if ( ch == 'D' || ch == 'd')
        {
            printf("\n Good Day");

        }
        else if (ch == 'E' || ch == 'e')
        {
            printf("\n Happy Days");
        }
        else
        {
            printf("\n No Message for such character...");
        }
        getch();
        return 0;


}
