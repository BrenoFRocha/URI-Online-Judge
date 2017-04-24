#include <stdio.h>
int main(void)
{
	int n1,n2,init,max,sum;
	while(1)
	{
		scanf("%i",&n1);
		scanf("%i",&n2);
		if(n1 <= 0 || n2 <= 0)
		{
			return 0;
		}
		if(n1 > n2)
		{
			init = n2;	
			max = n1;
		}
		else
		{
			init = n1;	
			max = n2;
		}
		sum = init;
		while(init < max)
		{
			printf("%i ",init);
			init += 1;
			sum += init;
			if(init == max)
			{
				printf("%i Sum=%i\n",init,sum);
			}
		}
	}
	return 0;
}