#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, Num=0;

    printf("Enter a Number :");
    scanf("%d",&Num);

    for(i=1; i<=10; i++)
    {
        printf("%d\n",Num*i);
    }

    getch();
    return 0;
}
