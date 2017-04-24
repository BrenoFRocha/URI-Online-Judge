#include <stdio.h> 

int main()
{ 
    int days,d,m,a;
    a = 0;
    m = 0;
    d = 0;
    scanf("%i", &days); 
    
    while(days >= 365)
    {
		days -= 365;
		a += 1;
	}
	while(days >= 30)
    {
		days -= 30;
		m += 1;
	}
	while(days >= 1)
    {
		days -= 1;
		d += 1;
	}
    
    printf("%i ano(s)\n", a); 
    printf("%i mes(es)\n", m); 
    printf("%i dia(s)\n", d); 

    return 0; 
} 
