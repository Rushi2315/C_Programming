/// Maximum From 2 Numbers - Using if else.C

#include<stdio.h>
#include<conio.h>

int main()
{

    int Num1 = 0 , Num2 = 0;

    printf("\n Enter 2 Integer Number = ");
    scanf("%d%d", &Num1, &Num2);

    if(Num1 == Num2)
    {
        printf("\n Both Number Are Equal.");
    }
    else if ( Num1 > Num2)
    {
        printf("\n Enter 1st Number of Maximum", Num1);
    }
    else
    {
        printf("\n Enter 2nd Number of Maximum", Num2);
    }
    getch();
    return 0;
}
