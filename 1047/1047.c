#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hI = 0, hF = 0, mI = 0, mF = 0, hours = 0, minutes = 0;
	scanf("%i %i %i %i",&hI,&mI,&hF,&mF);
	hours = (hF - hI) < 0 ? 24 + (hF - hI) : (hF - hI);
	
	minutes = mF - mI;
	if(minutes <  0)
	{
		minutes = 60 + (mF - mI);
		hours --;
	}
	if(hI == hI && mI == mF)
	{
		hours = 24;
		minutes = 0;
	}
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hours, minutes);
	return 0;
}