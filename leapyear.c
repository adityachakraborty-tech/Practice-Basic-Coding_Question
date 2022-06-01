/* The next program finds whether a given year is leap or not. A centennial(divisible by 100) year is Ie
if it is divisible by 400, and a non centennial year is leap if it is divisible by 4.
P5.5 Program to find whether a year is leap or not*/
#include <stdio.h>
int main()
{
   int year;
   printf("enter the year:  ");
   scanf("%d", &year);
   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
   {
      printf("Leap year\n");
   }
   else
   {
      printf("Not leap\n");
   }
   return 0;
}