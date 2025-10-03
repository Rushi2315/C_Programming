#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10];
    int i=0;

    printf("Elements of The Array: \n");
   for(i=0; i<10; i++)
   {
    printf("Element at index %d:%d\n",i,arr[i]);
   }

    getch();
    return 0;
}
