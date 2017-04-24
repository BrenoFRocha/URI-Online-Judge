#include <stdio.h>
int main(void)
{
	int x[20];
	int max = 19;
	int i;
	for(i = 0; i < 20; i++)
	{
		scanf("%i",&x[i]);
	}
	for(i = 0; i < 10; i++)
	{
		int temp = x[i];
		x[i] = x[max-i];
		x[max-i] = temp;
	}
	for(i = 0; i < 20; i++)
	{
		printf("N[%i] = %i\n",i,x[i]);
	}
	return 0;
}