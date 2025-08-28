#include<stdio.h>
#include<conio.h>

int main()
{
    char ch= '\0';
    char Str='\0';

    printf("Enter Starting Point \n");
    scanf("%c",&Str);

    if(Str <='Z' && Str >='A')
    {
        for(ch =Str; ch<='Z'; ch++)
        {
            printf("\n%c",ch);
        }
    }
    else if(Str <='z' && Str >='a')
    {
        for(ch = Str; ch>='a'; ch--)
        {
            printf("\n%c", ch);
        }
    }
    else
    {
        printf("Invalid");
    }

    getch();
    return 0;
}
