#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[No]={};
    int i=0,srch=0,index=0,cnt=0;

    for (i=0; i<no; i++)
    {
        printf("Enter Element No.%d in Array", i+1);
        scanf("%d",&Arr[i]);
    }

    printf("Enter Element No. You Want To Search");
    scanf(("%d", &srch);

    for(i=0; i<No; i++)
    {
        if(srch == Arr[i])
        {
            index==i;
            cnt++;
            break;
        }
    }

    if(cnt >0)
    {
        printf("\n\n The Index Of Given No. Is %d",i);
    }
    else
    {
        printf("\n\n The Index Of Given No. Is Not Found.");
    }

    getch();
    return 0;
}
