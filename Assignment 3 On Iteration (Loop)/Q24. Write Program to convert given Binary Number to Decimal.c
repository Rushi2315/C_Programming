#include<stdio.h>
#include<conio.h>

int main()
{
     long long binary;

     int Decimal =0, Mul =1, R=0;

     printf("Enter A Binary Number :");
     scanf("%||d", &binary);

     while(binary > 0)
     {
         R = binary %10;
         Decimal = Decimal + R*Mul;
         binary = binary /10;
         Mul = Mul*2;
     }

     printf("%d\n", Decimal);

     getch();
     return 0;
}
