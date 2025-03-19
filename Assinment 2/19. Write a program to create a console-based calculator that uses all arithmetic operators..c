#include<stdio.h>
#include<conio.h>

int main()
{
    char Oprt='\0';

    int Num1=0, Num2 =0;

    printf("\n Enter a Operator For Mathematical Calculation : \n\n");
    scanf("%c",&Oprt);

    printf("\n Enter First Number : \n");
    scanf("%d",&Num1);
    printf("\n Enter Second Number :\n");
    scanf("%d",&Num2);

    switch(Oprt)
    {
    case '+':


        printf("\n\n Addition of Given Numbers is : %d", Num1+Num2);
        break;

    case '-':


        printf("\n\n Substraction Of Given Numbers is : %d", Num1- Num2);
        break;

    case '/':


        printf("\n\n Division of Given Numbers is : %d", Num1/Num2);
        break;

    case '%':


        printf("\n\n Module Division Of Given Numbers is : %d", Num1%Num2);
        break;


    default:

        printf("\n\n Invalid Arethmetic Operator");
        break;

    }

    getch();
    return 0;
}
