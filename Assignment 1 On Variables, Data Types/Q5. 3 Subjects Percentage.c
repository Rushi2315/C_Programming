#include <stdio.h>
#include <conio.h>

int main()
{
    int Sub1;
    int Sub2;
    int Sub3;
    int Sub4;

    printf("Enter 1st Marks : ");
    scanf("%d",&Sub1);
    printf("Enter 2sd Marks : ");
    scanf("%d",&Sub2);
    printf("Enter 3rd Marks : ");
    scanf("%d",&Sub3);
    printf("Enter 4th Marks : ");
    scanf("%d",&Sub4);


    printf("Percentage of Numbers is %d \t",(Sub1+Sub2+Sub3+Sub4)/4);


    getch();
    return 0;

}
