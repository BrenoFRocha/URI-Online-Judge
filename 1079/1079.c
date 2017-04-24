#include <stdio.h>

int main (void)
{
	double n1,n2,n3;
	int i, n;
	i = 0;
	
	scanf("%i", &n);
	while(i < n)
	{
		scanf("%lf", &n1);
		scanf("%lf", &n2);
		scanf("%lf", &n3);
		printf("%.1lf\n", (n1*2 + n2*3 + n3*5)/10);
		i++;
	}
	
	return 0;
}


