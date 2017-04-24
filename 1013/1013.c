#include <stdio.h>
int main(void)
{
	int input1,input2,input3, result;
	
	scanf("%i",&input1);
	
	scanf("%i",&input2);
	
	result = input1 > input2 ? input1:input2;
	
	scanf("%i",&input3);
	
	result = input3 > result ? input3:result;
	
	printf("%i eh o maior\n", result);
	return 0;
}