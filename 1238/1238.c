#include <stdio.h>
#include <string.h>
int main(void)
{
	int repeat, counter;
	counter = 0;
	char fSentence[50], sSentence[50];
	scanf("%i",&repeat);
	while(counter < repeat)
	{
		scanf("%s",fSentence);
		scanf("%s",sSentence);
		char finalS[100];
		int position;
		position = 0;
		int pos;
		pos = 0; 
		while(position < (strlen(fSentence) + strlen(sSentence)))
		{
			if(pos < strlen(fSentence)) 
			{
				finalS[position] = fSentence[pos];
				position ++;
			}
			if(pos < strlen(sSentence))
			{
				finalS[position] = sSentence[pos];
			}
			position ++;
			pos ++;
		}
		printf("%s\n",finalS);
		memset(finalS,0,strlen(finalS));
		counter++;
	}
	return 0;
}