#include <stdio.h> 

int main()
{ 
    int a,b,d,e;
    float c, f; 
    
    scanf("%i %i %f", &a, &b, &c); 
    scanf("%i %i %f", &d, &e, &f); 
    
    printf("VALOR A PAGAR: R$ %.2f\n", (b*c)+(e*f)); 

    return 0; 
} 
