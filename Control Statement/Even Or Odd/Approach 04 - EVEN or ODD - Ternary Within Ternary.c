// Number Even Or Odd - Using if else.C

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

        printf("\n Enter An Integer Number = ");
        scanf("%d", &Num);

    (Num == 0)? printf("\n Given Number is Neutral.") : ((Num % 2 == 0 ) ? printf("\n Given Number is Even."): printf("\n Given Number is Odd."));


    getch();
    return 0;
}
