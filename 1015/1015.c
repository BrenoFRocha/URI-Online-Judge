#include <stdio.h>
#include <math.h>
int main(void)
{
	double x1,x2,y1,y2,distance;
	
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	scanf("%lf",&x2);
	scanf("%lf",&y2);
	
	distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		
	printf("%.4lf\n", distance);
	return 0;
}