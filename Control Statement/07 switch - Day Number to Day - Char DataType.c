#include<stdio.h>
#include<conio.h>

int main()
{
    char Day = '0';

    printf("\n Enter Day Number (1 - 7) to view Day Text = ");
    scanf("%c", &Day);

    switch(Day)
    {
    case '1' :
        printf("\n Monday");
        break;

    case '2' :
        printf("\n Tuesday");
        break;

    case '3' :
        printf("\n Wednesday");
        break;

    case '4' :
        printf("\n Thursday");
        break;

    case '5' :
        printf("\n Friday");
        break;

    case '6' :
        printf("\n Saturday");
        break;

    case '7' :
        printf("\n Sunday");
        break;

    default :
        printf("\n Invalid Day!!!");
        break;
    }
    getch();
    return 0;
}
