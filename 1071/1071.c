#include <stdio.h>

int main (void)
{
	int x,y,sum;
	
	sum = 0;
	scanf("%i", &x);
	scanf("%i", &y);
		
	if(x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	
	if(x == y)
	{
		printf("0\n");
	}
	else
	{
		x += 1;
		while(x < y)
		{
			if(x % 2 == 1 || x % 2 == -1)
			{
				sum += x;
			}
			x++;
		}
		printf("%i\n",sum);
	}
	
	return 0;
}
