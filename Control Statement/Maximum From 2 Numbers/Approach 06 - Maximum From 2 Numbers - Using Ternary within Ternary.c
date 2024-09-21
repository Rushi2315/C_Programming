
/// Maximum From 2 Numbers - Using Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0 , Num2 =0;

    printf("\n Enter 2 Integer Number = ");
    scanf("%d%d",&Num1, &Num2);

    (Num1 == Num2)? printf("\n Num1 & Num2 Equal.")  :  ((Num1 > Num2)? printf("\n %d is Max", Num1) : printf("\n %d is Max",Num2));

    getch();
    return 0;
}
