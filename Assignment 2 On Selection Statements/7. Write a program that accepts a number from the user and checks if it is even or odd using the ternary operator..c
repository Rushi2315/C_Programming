#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("Enter Rohit's Rus To Check the Runs are Even Or Odd :\n\n\n");
    scanf("%d",&Num);

    (Num %2 == 0)? printf("%d is Even",Num):printf("%d is Odd",Num);


    getch();
    return 0;
}
