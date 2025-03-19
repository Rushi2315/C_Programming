#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Division for Exam :\n\n");
    scanf("%c", &ch);


    switch(ch)
    {
    case 'A':

        printf("\n\n Your Exam At 10 AM");
        break;

    case 'B':

        printf("\n\n Your Exam At 10.30 AM");
        break;

    case 'C':

        printf("\n\n Your Exam At 1 PM");
        break;

    case 'D' :

        printf("\n\nYour Exam at 1.30 PM");
        break;


    default:


        printf("\n\nInvalid Division");
        break;
    }
    getch();
    return 0;
}
