#include <stdio.h>
int main(void)
{
	float x, y;
	scanf("%f",&x);
	scanf("%f",&y);
	
	if(x == 0 && y == 0)
	{
		printf("Origem\n");
	}
	else if(x == 0)
	{		
		printf("Eixo Y\n");
	}
	else if(y == 0)
	{
		printf("Eixo X\n");
	}
	else if(x < 0)
	{
		if(y > 0)
		{
			printf("Q2\n");	
		}
		else
		{
			printf("Q3\n");	
		}
	}
	else
	{
		if(y > 0)
		{
			printf("Q1\n");	
		}
		else
		{
			printf("Q4\n");	
		}
	}
	return 0;
}