#include <stdio.h>

int main(int argc, char* args[]) 
{
	double value,decimal;
	int notas,moeda,n100,n50,n20,n10,n5,n2,m1,m50,m25,m10,m5,m01;
	scanf("%lf",&value);
	notas = (int)value;
	decimal = value - notas;
	n100 = notas/100;
	notas = notas%100;
	n50 = notas/50;
	notas = notas%50;
	n20 = notas/20;
	notas = notas%20;
	n10 = notas/10;
	notas = notas%10;
	n5 = notas/5;
	notas = notas%5;
	n2 = notas/2;
	notas = notas%2;
	m1 = notas/1;
	moeda = decimal*100;
	m50 = moeda/50;
	moeda = moeda%50;
	m25 = moeda/25;
	moeda = moeda%25;
	m10 = moeda/10;
	moeda = moeda%10;
	m5 = moeda/5;
	moeda = moeda%5;
	m01 = moeda/1;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m01);
}