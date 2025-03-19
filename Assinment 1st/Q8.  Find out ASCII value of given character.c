#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter A Char:");
    scanf("%c", &ch);

    printf("ASCII value of '%c' is: %d\n", ch,ch);

    getch();
    return 0;
}
