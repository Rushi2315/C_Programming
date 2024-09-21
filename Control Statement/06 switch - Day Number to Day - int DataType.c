
#include<stdio.h>
#include<conio.h>

void  Display_Day(int);

int main()
{
                int  Day = 0;

                printf("\n Enter Day Number (1 - 7) to View Day Text = ");
                scanf("%d", &Day);

                Display_Day(Day);

                getch();
                return  0;
}

void  Display_Day(int  D)
{
                switch( D )
                {
                        case 1:
                                        printf("\n Monday");
                                        printf("\n Shiv");
                                        break;
                        case  2:
                                        printf("\n Tuesday");
                                        printf("\Jai Hanuman");
                                        break;
                        case  3:
                                        printf("\n Wednesday");
                                        printf("\n Shree Kirshna");
                                        break;
                        case  4:
                                        printf("\n Thursday");
                                        printf("\n shree Guru Datta");
                                        break;
                        case  5:
                                        printf("\n Friday");
                                        printf("\n Lakshimi");
                                        break;
                        case  6:
                                        printf("\n Saturday");
                                        printf("Shani Dev");
                                        break;
                        case  7:
                                        printf("\n Sunday");
                                        break;
                        default :
                                        printf("\n Invalid Day!!!");
                                        break;
                }
                return 0;
}
