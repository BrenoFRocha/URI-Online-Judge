#include <stdio.h>
int main(void)
{
	int i1,i2,i3;
	
	scanf("%i",&i1);
	scanf("%i",&i2);
	scanf("%i",&i3);

    if(i1 < i2 && i1 < i3)
	{
		if(i2 < i3)
		{
			printf("%i\n", i1);
			printf("%i\n", i2);
			printf("%i\n\n", i3);
		}
		else
		{
			printf("%i\n", i1);
			printf("%i\n", i3);
			printf("%i\n\n", i2);
		}
	}
	else if(i2 < i1 && i2 < i3)
	{
		if(i1 < i3)
		{
			printf("%i\n", i2);
			printf("%i\n", i1);
			printf("%i\n\n", i3);
		}
		else
		{
			printf("%i\n", i2);
			printf("%i\n", i3);
			printf("%i\n\n", i1);
		}
	}
	else
	{
		if(i1 < i2)
		{
			printf("%i\n", i3);
			printf("%i\n", i1);
			printf("%i\n\n", i2);
		}
		else
		{
			printf("%i\n", i3);
			printf("%i\n", i2);
			printf("%i\n\n", i1);
		}
	}
	
	printf("%i\n", i1);
	printf("%i\n", i2);
	printf("%i\n", i3);
	
	return 0;
}