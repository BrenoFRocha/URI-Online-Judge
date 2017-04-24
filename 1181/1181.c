#include <stdio.h>
int main()
{
	double total;
	double grid[12][12];
	char operation[2];
	int line, x, y;
	total = 0;
	scanf("%d", &line);
	scanf("%s", &operation);
	for(x = 0; x < 12; x++)
	{
		for(y = 0; y < 12; y++)
		{
			scanf("%lf", &grid[x][y]);
			if(x == line)
			{
				total += grid[x][y];
			}
		}
	}
	if(operation[0] == 'S')
	{
		printf("%.1lf\n",total);
	}
	else if(operation[0] == 'M')
	{
		total /= 12;
		printf("%.1lf\n",total);
	}
	return 0;
}
