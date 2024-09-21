// Number Even Or Odd - Using if else.C

#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0;

    printf("\n Enter a Integer Number = ");
    scanf("%d", &Num );

    if(Num == 0)
    {
        printf("\n Given Number is Neutral");
    }
    else if ( Num % 2 == 0)
    {
        printf("\n Given Number is Even");
    }
    else
    {
        printf("\n Given Number is Odd ");
    }
    getch();
    return 0;
}
