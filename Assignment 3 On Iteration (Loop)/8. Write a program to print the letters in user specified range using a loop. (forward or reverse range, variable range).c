#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    char Str='\0';
    char End='\0';

    printf("Enter Starting Point\n");
    scanf("%c",&Str);

    printf("Enter Starting Point\n");
    scanf("%c",&End);

    if(Str <= End)
    {
        for(ch =Str; ch <= End; ch++)
        {
            printf("\n %c",ch);
        }
    }
    else
    {
        for(ch = Str; ch >= End; ch--)
        {
            printf("\n %c",ch);
        }
    }

    getch();
    return 0;
}
