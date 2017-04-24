#include <stdio.h>
int main(void)
{
	int counter, i , days;
	i = 0;
	days = 0;
	float food;
	scanf("%i",&counter);
	while(i < counter)
	{
		scanf("%f",&food);
		while(food > 1)
		{
			food /= 2;
			days += 1;
			if(food  <= 1)
			{
				printf("%i dias\n", days);
				days = 0;
			}
		}
		i++;
	}
	return 0;
}