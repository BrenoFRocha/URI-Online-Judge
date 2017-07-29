#include <stdio.h>

int main(int argc, char* args[]) 
{
	int begin, end, time;
	scanf("%d",&begin);
	scanf("%d",&end);
	time = 0;
	if(begin == end)
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	else
	{
		while(begin != end)
		{
			time += 1;
			begin += 1;
			if(begin == 24)
			{
				begin = 0;
			}
		}
		printf("O JOGO DUROU %i HORA(S)\n", time);
	}
	return 0;
}