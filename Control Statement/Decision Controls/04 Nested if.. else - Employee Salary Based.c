#include<stdio.h>
#include<conio.h>

int main()
{
     int Sal = 0 , Is_Stud = 0;

     printf("\n Enter Your Salary = ");
     scanf("%d", &Sal );

     printf("\n Enter 1 If You Are a Student = ");
     scanf("%d", &Is_Stud);

     if (Sal <= 0 )
     {
         if (Is_Stud == 1)
         {
             printf("\n Candidate is Student ");
         }
         else
         {
             printf("\n Candidate is Fresher ");
         }
     }
     else
     {
         if (Sal > 40000)
         {
             printf("\n Candidate is an Expert Employee");
         }
         else
         {
             printf ("\n Candidate is  an Beginner Employee ");
         }
     }
    getch();
    return 0;

}

