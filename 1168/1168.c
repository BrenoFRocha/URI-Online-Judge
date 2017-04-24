#include <stdio.h>
#include <string.h>
int main () 
{
    int i, repeat, leds;
	char number[100];	
    scanf("%i",&repeat);
    while(repeat--)
	{
        scanf("%s",number);
        for(i = 0, leds = 0; i <  strlen(number); i++) 
		{
            if(number[i] == '0' || number[i] == '6' || number[i] == '9')
			{
                leds += 6;
			}
            else if(number[i] == '1')
			{
				leds += 2;
			}
            else if(number[i] == '4')
			{
				leds += 4;
			}
			else  if(number[i] == '8')
			{
                leds += 7;
			}
			else  if(number[i] == '7')
			{
                leds += 3;
			}
			else
			{
                leds += 5;
			}
		}
        printf("%i leds\n", leds);
    }
    return 0;
}