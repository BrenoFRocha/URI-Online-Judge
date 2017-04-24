#include <stdio.h>
int main(void)
{
	int input1,input2;
	
	scanf("%i",&input1);
	scanf("%i",&input2);
	
	switch(input1)
	{
		case 1:
			printf("Total: R$ %.2f\n", input2 * 4.00);
			break;
		case 2:
			printf("Total: R$ %.2f\n", input2 * 4.50);
			break;
		case 3:
			printf("Total: R$ %.2f\n", input2 * 5.00);
			break;
		case 4:
			printf("Total: R$ %.2f\n", input2 * 2.00);
			break;
		case 5:
			printf("Total: R$ %.2f\n", input2 * 1.50);
			break;
	}
	return 0;
}