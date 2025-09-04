#include<stdio.h>
#include<conio.h>

int main()
{
    int Num, Num1 =0, Num2 =1, Next;

    printf("Enter The Number :");
    scanf("%d",&Num);


    while(Num1 <= Num)
    {
        printf("%d",Num);
        Next = Num1 + Num2;
        Num1 = Num2;
        Num2 =Next;
    }

    printf("\n");
    return 0;
}
