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
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if(x*x == y*y + z*z)
	{
		printf("TRIANGULO RETANGULO\n");
	}
	if(x*x > y*y + z*z)
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(x*x < y*y + z*z)
	{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(x == y && y == z)
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	else if(x == y || x == z || y == z)
	{
			printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
}