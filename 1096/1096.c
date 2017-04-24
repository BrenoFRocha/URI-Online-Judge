#include <stdio.h>
int main(void)
{
	int i,j;
	i = 1;
	j = 7;
	while(i <= 9)
	{
		printf("I=%i J=%i\n",i,j);
		j --;
		if(j < 5)
		{
			j = 7;
			i += 2;
		}
	}
	return 0;
}