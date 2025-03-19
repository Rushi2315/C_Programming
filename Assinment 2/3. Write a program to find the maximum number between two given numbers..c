#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1= 0, Num2= 0;

    printf("Enter 2 Numbers To Check Which Number is Max :\n\n");
    scanf("%d",&Num1);
    scanf("%d",&Num2);


    if (Num1 > Num2)
    {
        printf("Number First Is Maximum ");
    }
    else if (Num2 > Num1)
    {
        printf("Number Second is Maximum ");
    }
    else
    {
        printf("Given Number is Equal");
    }

    getch();
    return 0;

}
