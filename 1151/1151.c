#include <stdio.h>

int main (void)
{
	int i, value1, value2, input, b;
	i = 0;
	value1 = 0;
	value2 = 1;
	scanf("%i",&input);
	if(input >= 2)
	{
		printf("0 1 ");
		while(i < input - 2)
		{
			b = value1 + value2;
			if(i != input - 3)
			{
				printf("%i ",b);	
			}
			else
			{
				printf("%i",b);	
			}
			value1 = value2;
			value2 = b;
			i++;
			if(i == input - 2)
			{
				printf("\n");
			}
		}
	}
	else if(input == 1)
	{
		printf("0 ");
	}
	return 0;
}

