#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No); //-2

    if(No > 0)//False
    {
        printf("\n Welcome You Have Enter a Valid Number ");
    }

    getch();
    return 0;

}
