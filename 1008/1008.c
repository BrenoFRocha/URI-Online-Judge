#include <stdio.h>

int main ()
{
	int x,y;
	float z;
	
	scanf("%i",&x);
	scanf("%i",&y);
	scanf("%f",&z);
	
	printf("NUMBER = %i\n", x);
	printf("SALARY = U$ %.2f\n", (y*z));
	
	return 0;
}
