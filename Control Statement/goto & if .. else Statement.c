#include<stdio.h>
#include<conio.h>

int main()
{
        int  N = 0;

        Up :
                printf("\n Enter a Number To Check whether it is +Ve or -Ve = ");
                scanf("%d",&N);

                if(N == 0)
                {
                            printf("\n You Have Entered Zero, which is Neutral.");
                            printf("\n Please Enter Valid Number..\n");
                            goto  Up;
                }

                if( N > 0 )
                {
                            printf("\n Welcome You Have Entered a Positive Number");
                }
                else
                {
                            printf("\n Welcome You Have Entered a Negative Number");
                }

                getch();
                return  0;
}

