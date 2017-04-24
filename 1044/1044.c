#include <stdio.h>
int main(void)
{
	int A,B;
	
	scanf("%i",&A);
	scanf("%i",&B);
	
	int a = A>B?A:B;
	int b = A<B?A:B;
	
	if(a % b == 0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
}