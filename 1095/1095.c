#include <stdio.h>
int main(void)
{
	int i,j;
	i = 1;
	for(j = 60; j >= 0;  j-= 5)
	{
		printf("I=%i J=%i\n", i, j);
		i += 3;
	}
	return 0;
}