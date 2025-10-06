#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={0};
    int i=0, srch=0, index=0, cnt=0;

    for(i=0;i<7;i++)
    {
        printf("\n Enter Element No.%d :", i+1);
        scanf("%d",&Arr[i]);

    }

    for(i=0;i<7;i++)
    {
        printf("\n\n Element No. %d is %d", i+1,Arr[i]);
    }

    printf("\n Enter an Element No. You Want To Search :");
    scanf("%d",&srch);

    for(i=0; i<7; i++)
    {
        if (srch == Arr[i])
        {
            index=i;
            cnt++;
            break;
        }
    }

    if (cnt>0)
    {
        printf("\n\n The Index Of Given No. is %d",i);
    }
    else
    {
        printf("\n\n The Index Of Given No. Is Not Found.");
    }

    getch();
    return 0;
}
