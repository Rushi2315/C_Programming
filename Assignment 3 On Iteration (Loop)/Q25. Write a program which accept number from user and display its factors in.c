#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0, i=0;

    printf("Enter The Number :");
    scanf("%d", &Num);


    for(i = Num; i>=1; i--)
    {
        if(Num %i == 0)
        {
            printf("%d\n",i);
        }
    }

    getch();
    return 0;
}
