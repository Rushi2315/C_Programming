#include<stdio.h>
#include<conio.h>

int main()
{
    int R =0, U =0, D =0;

    printf("Enter 3 Numbers To Check Which Number Is Max :\n\n\n");
    scanf("%d",&R);
    scanf("%d",&U);
    scanf("%d",&D);

    if(R>U && R>D)
    {
        printf("Number 1st Is Max");
    }
    else if(U>R && U>D)
    {
        printf("Number 2nd Is Max");
    }
    else
    {
        printf("Number 3rd is Maximum");
    }

    getch();
    return 0;
}
