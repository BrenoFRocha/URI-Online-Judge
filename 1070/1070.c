#include <stdio.h>
int main(void)
{
	int input,counter;
	counter = 0;
	scanf("%i",&input);
	while(counter < 6)
	{
		input += 1;
		if(input % 2 == 1)
		{
			counter += 1;
			printf("%i\n",input);
		}
	}
	
	return 0;
}