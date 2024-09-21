#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n\n Enter a character to check whether, \n It is Vowel Or Consonant = ");

        ch = getche();

        if( ch == 'A' || ch == 'a' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
                    printf("\n\n Given Character is Vowel. ");
        }
        else if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') );
        {
                    printf("\n\n Given Character is Consonant. ");
        }
        else
        {
                    printf("\n\n Given Character is Not Alphabet. ");
        }

        getch();
        return 0;
}

