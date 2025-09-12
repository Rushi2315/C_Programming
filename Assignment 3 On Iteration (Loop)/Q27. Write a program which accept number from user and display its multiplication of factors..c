#include<stdio.h>
#include<conio.h>

int main()
{
    int Num= 0, i=0, Mul =1;

    printf("Enter The Number :");
    scanf("%d",&Num);

    for(i=1; i<=Num; i++)
    {
        if(Num % i==0)
        {
            Mul*=i;
        }
    }

    printf("%d",Mul);

    getch();
    return 0;
}
