#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, Num =0, Sum =0;

    for(i=1; i<=10; i++)
    {
        printf("Enter 10 Numbers for Sum :");
        scanf("%d",&Num);

        Sum += Num;
    }
    printf("\n The Addition Of All Given Numbers Is %d",Sum);

    getch();
    return 0;

}
