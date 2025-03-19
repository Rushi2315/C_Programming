#include<stdio.h>
#include<conio.h>

int main()
{
    int Day_No = 0;

    printf("Enter Day Number To Check What Day it is : \n\n\n");
    scanf("%d",&Day_No);

    switch(Day_No)
    {
        case 1:
            printf("Sunday");
            break;

        case 2:
            printf("Monday");
            break;

        case 3:
            printf("Tuesday");
            break;

        case 4:
            printf("Wednesday");
            break;

        case 5:
            printf("Thursday");
            break;

        case 6:
            printf("Friday");
            break;

        case 7:
            printf("Saturday");
            break;

        default:
            printf("Invalid Day Number");
            break;
    }

    getch();
    return 0;
}

