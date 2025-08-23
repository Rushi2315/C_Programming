#include<stdio.h>
#include<conio.h>

int main()
{
    int Num =0, i=0;

    printf("Enter A Number :\n");
    scanf("%d",&Num);

    int Fact =1;
    for(i=1; i<=Num; i++)
    {
        Fact = Fact*i;
    }

    printf("%d\n",Fact);

    getch();
    return 0;
}
