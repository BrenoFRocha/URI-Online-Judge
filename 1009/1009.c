#include <stdio.h> 

int main()
{ 
    char a[100]; 
    float b, c; 
    
    scanf("%s", a); 
    scanf("%f", &b); 
    scanf("%f", &c); 
    printf("TOTAL = R$ %.2f\n", b + (c * 0.15) * 100 / 100); 

    return 0; 
} 
