#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0, i=0, cnt=0;

    printf("Enter a Number :\n");
    scanf("%d",&Num);

    printf("Enter a Count :\n");
    scanf("%d",&cnt);

    for(i=1; i<=cnt; i++)
    {
        printf("\n %d",Num);
    }

    getch();
    return 0;
}
