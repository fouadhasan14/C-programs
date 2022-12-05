// C program to find area
// of circle
#include <stdio.h>
#include <math.h>
#define PI 3.142
double r;

double findArea(r)
{
return PI * pow(r, 2);
}

int main()
{
    double r;
    scanf("%lf",&r);
	printf("Area is %f", findArea(5));
	return 0;
}
