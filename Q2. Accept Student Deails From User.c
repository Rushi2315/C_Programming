#include <stdio.h>
#include <conio.h>

int main()
    {
        char Name[60] = "";
        int Roll_No =0;
        char Course [25] = "";
        char city[20] = "";

        printf("Enter Student Name : ");
        scanf("%s",Name);

        printf("Enter Roll_No : ");
        scanf("%d",&Roll_No);

        printf("Enter Course : ");
        scanf("%s", Course);

        printf("Enter city : ");
        scanf("%s", city);


        printf("Student Name : %s \n", Name);
        printf("Roll No : %d \n", Roll_No);
        printf("Course : %s \n", Course);
        printf("city : %s \n", city);
    }
