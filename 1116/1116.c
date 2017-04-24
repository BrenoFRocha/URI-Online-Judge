#include <stdio.h>

int main (void)
{
	int i, n;
	float n1, n2;
	n = 0;
	scanf("%i", &i);
	while(n < i)
	{
		scanf("%f", &n1);
		scanf("%f", &n2);
		if(n2 == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			printf("%.1lf\n", (n1 / n2));
		}
		n++;
	}
	
	return 0;
}


