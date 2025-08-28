#include<stdio.h>
#include<conio.h>

int main()
{
    int Num, Sum =0;
    while(1)
    {
        printf("Enter a Number :");
        scanf("%d",&Num);

        if(Num >0)
        {
            Sum += Num;
        }
        else
        {
            break;
        }
    }

    printf("Sum Of Entered Numbers :%d\n", Sum);

    getch();
    return 0;
}
