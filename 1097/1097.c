#include <stdio.h>
int main(void)
{
	int i,j,temp;
	i = 1;
	j = 7;
	temp = 0;
	while(i <= 9)
	{
		printf("I=%i J=%i\n",i,j);
		j --;
		temp += 1;
		if(temp == 3)
		{
			temp = 0;
			j += 5;
			i += 2;
		}
	}
	return 0;
}