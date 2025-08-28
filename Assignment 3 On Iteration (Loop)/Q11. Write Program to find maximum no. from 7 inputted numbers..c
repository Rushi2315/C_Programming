#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, Num=0, Max=0;

    for(i=1; i<=7; i++)
    {
        printf("Enter 7 Numbers for Finding Max :");
        scanf("%d", &Max);

        if(Num >= Max)
        {
            Max = Num;
        }

        printf("\n The Maximum in Given Numbers is %d", Max);

    }
    getch();
    return 0;
}
