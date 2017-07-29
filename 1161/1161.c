#include <stdio.h>

int main(int argc, char* args[]) 
{
	long long int r1, r2, i;
	while(scanf("%lld %lld",&r1, &r2) != EOF)
	{
		if(r1 == 0)
		{
			r1 = 1;
		}
		if(r2 == 0)
		{
			r2 = 1;
		}
		i = r1 - 1;
		while(i != 0)
		{
			r1 *= i;
			i -= 1;
		}
		i = r2 - 1;
		while(i != 0)
		{
			r2 *= i;
			i -= 1;
		}
		printf("%lld\n", (r1+r2));
	}
	return 0;
}