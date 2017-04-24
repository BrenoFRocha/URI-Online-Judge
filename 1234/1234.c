#include <stdio.h>
#include <string.h>
int main(void)
{
	char sentence[1000];
	int i, stringSize, n;
	while(gets(sentence) != NULL)
	{
		stringSize = strlen(sentence);
		n = 0;
		for (i = 0; i < stringSize; i++)
		{
			if(sentence[i] != ' ')
			{
				n++;
				if(n%2 != 0)
				{
					if(sentence[i]>='a' && sentence[i]<= 'z')
					{
						sentence[i] = sentence[i] - 32;
					}
					else
					{
						sentence[i] = sentence[i];
					}
				}
				else
				{
					if(sentence[i]>='A' && sentence[i]<= 'Z')
					{
						sentence[i] = sentence[i] + 32;
					}
					else
					{
						sentence[i] = sentence[i];
					}
				}
			}
		}
		printf("%s\n",sentence);
	}
}