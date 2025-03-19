#include<stdio.h>
#include<conio.h>

int main()
{
    int Month =0;

    printf("Enter Day Number To Check What Day it is : \n\n\n");
    scanf("%d",&Month);

    if(Month == 1)
    {
        printf("January");
    }
    else if(Month == 2)
    {
        printf("Febuary");
    }
    else if(Month == 3)
    {
        printf("March");
    }
    else if(Month == 4)
    {
        printf("April");
    }
    else if(Month == 5)
    {
        printf("May");
    }
    else if(Month == 6)
    {
        printf("June");
    }
    else if(Month == 7)
    {
        printf("July");
    }
    else if(Month == 8)
    {
        printf("August")
    }
    else if(Month == 9)
    {
        printf("September");
    }
    else if(Month == 10)
    {
        printf("October");
    }
    else if(Month == 11)
    {
        printf("November");
    }
    else if(Month == 12)
    {
        printf("December");
    }

    getch();
    return 0;
}
