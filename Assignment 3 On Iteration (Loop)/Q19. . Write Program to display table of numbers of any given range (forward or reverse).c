#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, j=0, Str=0, End=0;

    printf("Enter Starting Point :");
    scanf("%d",&Str);

    printf("Enter Ending Point :");
    scanf("%d",&End);

    for(i=1; i<=10; i++)
    {
        if(End < Str)
        {
            for(j=Str; j>=End; j--)
            {
                printf("%3d ",i*j);
            }
        }
        else
        {
            for(j=Str; j<=End; j++)
            {
                printf("%3 ",i*j);
            }
        }

        printf("\n");
    }

    getch();
    return 0;
}
