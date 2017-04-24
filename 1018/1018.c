#include <stdio.h>
int main(void)
{
	int temp,money,n100,n50,n20,n10,n5,n2,n1;
	scanf("%i",&money);
	temp = money;
	n100 = 0;
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;
	n1 = 0;
	while(money != 0)
	{
		if(money >= 100)
		{
			money -= 100;
			n100 += 1;
		}
		else if(money >= 50)
		{
			money -= 50;
			n50 += 1;
		}
		else if(money >= 20)
		{
			money -= 20;
			n20 += 1;
		}
		else if(money >= 10)
		{
			money -= 10;
			n10 += 1;
		}
		else if(money >= 5)
		{
			money -= 5;
			n5 += 1;
		}
		else if(money >= 2)
		{
			money -= 2;
			n2 += 1;
		}
		else
		{
			money -= 1;
			n1 += 1;
		}
	}
	
	printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", temp,n100,n50,n20,n10,n5,n2,n1);
	return 0;
}