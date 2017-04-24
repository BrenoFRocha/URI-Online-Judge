#include <stdio.h>

int main (void)
{
	int x,y;
	
	scanf("%i", &x);
	scanf("%i", &y);
		
	int i, counter = 1;	
	
	for(i = 1; i <= y; i++)
	{
		counter += 1;
		if(counter > x)
		{
			counter = 1;
			printf("%i\n", i);
		}
		else
		{
			printf("%i ", i);
		}
	}
	
	return 0;
}


