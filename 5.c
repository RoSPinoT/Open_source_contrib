#include <stdio.h>
int main()
{
   int day_of_month;
   printf("enter the date(1-30) :");
   scanf("%d",&day_of_month);

   switch(day_of_month)
     case 1: printf("the day is tuesday\n");
          break
     case 2: printf("the day is wednesday\n");
     case 3: printf("the day is thursday\n");
          break
     case 4: printf("the day is friday\n");

    return 0;}
