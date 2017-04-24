#include <stdio.h>
int main(void)
{
	double input1,input2, result;
	
	scanf("%lf",&input1);
	
	scanf("%lf",&input2);
	
	result = input1/input2;
		
	printf("%.3lf km/l\n", result);
	return 0;
}