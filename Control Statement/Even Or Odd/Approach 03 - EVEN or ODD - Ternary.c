// Number Even Or Odd - Using if else.C

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter an Integer Number to Check whether it is Even Or Odd = ");
    Up :
    scanf("%d", &Num );

    if (Num == 0)
    {
        printf("\n Given Number is Neutral.\n\n Please Enter Other than Zero Integer to Check whether it is Even Or Odd =");
        goto Up;
    }
    (Num % 2 == 0) ? printf("\n Given Number is Even. ") : printf("\n Given Number is Odd. ");

    getch();
    return 0;
}
