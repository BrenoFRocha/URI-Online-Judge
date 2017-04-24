#include <stdio.h> 

int main()
{ 
    int seconds,h,m,s;
    h = 0;
    m = 0;
    s = 0;
    scanf("%i", &seconds); 
    
    while(seconds >= 3600)
    {
		seconds -= 3600;
		h += 1;
	}
	while(seconds >= 60)
    {
		seconds -= 60;
		m += 1;
	}
	while(seconds >= 1)
    {
		seconds -= 1;
		s += 1;
	}
    
    printf("%i:%i:%i\n", h,m,s); 

    return 0; 
} 
