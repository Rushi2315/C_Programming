#include<stdio.h>
#include<conio.h>

int main()
{
                char  ch = '\0';

                printf("\n Enter a Character to View Corresponding Message = ");
                ch = getche();

                switch(ch)
                {
                        case 'a' :
                        case 'A' :
                                        printf("\n Welcome");
                                        break;
                        case 'b' :
                        case 'B' :
                                        printf("\n Good Morning");
                                        break;
                        case 'c' :
                        case 'C' :
                        case 'm' :
                        case 'M' :
                                        printf("\n Have a Nice Day");
                                        printf("\n Take Care ");
                                        break;
                        case 'd' :
                        case 'D' :
                        case 'p' :
                        case 'P' :
                        case 'g' :
                        case 'G' :
                                        printf("\n Good Health");
                                        break;
                        default :
                                        printf("\n No Message for such character....");
                                        break;
                }


                getch();
                return  0;
}

