#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   printf("\nEnter value of num1, num2 and num3:");
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n %d is greatest",num1);
   else if((num2>num3)&&(num2>num1))
      printf("\n %d is greatest",num2);
   else
      printf("\n %d is greatest",num3);
   return 0;
}
