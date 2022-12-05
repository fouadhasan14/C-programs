//You are given two integer x and y.
// Now you have to find the average of this two integer.
//Implement this by using
pointers.
#include <stdio.h>

int main()
{
  double first, second, *p, *q, avrg;

   printf("Enter two integers to add\n");
   scanf("%lf%lf", &first, &second);

   p = &first;
   q = &second;

   avrg = (*p + *q)/2;

   printf("avrg of the numbers = %lf\n", avrg);

   return 0;
}
