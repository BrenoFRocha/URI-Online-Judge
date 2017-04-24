#include <stdio.h>
int main(void)
{
	double x, y, z;
	
	scanf("%lf",&x);
	scanf("%lf",&y);
	scanf("%lf",&z);
	
	if(x < y)
	{
		double temp;
		temp = x;
		x = y;
		y = temp;
	}
	if(x < z)
	{
		double temp;
		temp = x;
		x = z;
		z = temp;
	}
	
	if(x >= y+z)
	{
		printf("Area = %.1f\n",(z*(x+y))/2);
	}
	else
	{
		printf("Perimetro = %.1f\n", x+y+z);
	}
	
	return 0;
}