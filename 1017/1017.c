#include <stdio.h>
int main(void)
{
	int hours,kmh;
	double distance;
	scanf("%i",&hours);
	scanf("%i",&kmh);
	
	distance = hours*kmh;
	
	printf("%.3lf\n", distance/12);
	return 0;
}