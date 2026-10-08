#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,choice;
 float result;
 clrscr();

 printf("===== SIMPLE CALCULATOR =====\n");
 printf("Made by CodeFlex\n\n");

 printf("Enter first number: ");
 scanf("%d",&a);
 printf("Enter second number: ");
 scanf("%d",&b);

 printf("\n1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Division\n");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);

 switch(choice)
 {
  case 1:
   result=a+b;
   printf("\nResult = %.2f",result);
   break;
  case 2:
   result=a-b;
   printf("\nResult = %.2f",result);
   break;
  case 3:
   result=a*b;
   printf("\nResult = %.2f",result);
   break;
  case 4:
   if(b==0)
    printf("\nError! Division by zero");
   else
   {
    result=(float)a/b;
    printf("\nResult = %.2f",result);
   }
   break;
  default:
   printf("\nWrong choice!");
 }

 printf("\n\nPress any key to exit...");
 getch();
}
