#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("Enter a Character To Check Given Character Is Upper, Lower , Digit Or Other : \n\n");
    scanf("%c",&ch);

    if((ch >='A' && ch <='Z'))
    {
        printf("\n\n %c is a Upper Character",ch);
    }
    else if ((ch >='a' && ch <='z'))
    {
        printf("\n\n %c is a Lower Character",ch);
    }
    else if ((ch >='0' && ch <='9'))
    {
        printf("\n\n %c is a Digit", ch);
    }
    else
    {
        printf("\n\n % is Not A Special Symbol", ch);
    }

    getch();
    return 0;
}
