#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;


    printf("Enter Day Number To Check What Day it is: \n\n\n");
    scanf("%d",&Day);

    if(Day == 1)
    {
        printf("Sunday");
    }
    else if(Day ==2)
    {
        printf("Monday");
    }
    else if(Day == 3)
    {
        printf("Tuesday");
    }
    else if(Day ==4)
    {
        printf("Wednseday");
    }
    else if(Day == 5)
    {
        printf("Thursday");
    }
    else if(Day == 6)
    {
        printf("Friday");
    }
    else if (Day == 7)
    {
        printf("Saturday");
    }

    getch();
    return 0;
}
