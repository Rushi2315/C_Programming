#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("Enter An Number To Check Given Number Is Even Or Odd :\n\n\n");
    scanf("%d",&num);

    if (num == 0)
    {
        printf("Given Number Is Zero");

    }
    else if (num % 2 == 0)
    {
        printf("Given Number Is Even");
    }
    else
    {
        printf("Given Number Is Odd");
    }

    getch();
    return 0;
}
