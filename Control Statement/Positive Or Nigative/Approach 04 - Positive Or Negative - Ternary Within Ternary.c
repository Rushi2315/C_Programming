/// Number Positive Or Negative - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
        int  Num = 0;

        printf("\n Enter an Integer Number = ");
        scanf("%d",&Num);

       ( Num == 0 ) ?  printf("\n Given Number is Neutral.") : ( ( Num > 0 ) ? printf("\n Given Number is Positive.") : printf("\n Given Number is Negative." ) );


        getch();
        return 0;
}
