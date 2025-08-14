#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("Enter An Number To Check Given Number Is Positive Or Negative : \n\n");
    scanf("%d",&Num);


    if (Num == 0)
    {
        printf("Given Number is Zero");

    }
    else if(Num > 0)
    {
        printf("Given Number is Positive");
    }
    else
    {
        printf("Given Number is Negative");
    }

    getch();
    return 0;

}
