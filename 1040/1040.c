#include <stdio.h>
int main(void)
{
	float n1,n2,n3,n4,eS,fR;
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4);
	fR = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
	printf("Media: %.1f\n",fR);
	if(fR >= 7.0f)
	{
		printf("Aluno aprovado.\n");
	}
	else if(fR < 5.0f)
	{
		printf("Aluno reprovado.\n");
	}
	else
	{
		printf("Aluno em exame.\n");		
		scanf("%f",&eS);
		fR = (eS + fR)/2;
		printf("Nota do exame: %.1f\n",eS);
		if(fR >= 5.0f)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",fR);
		}
		else
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",fR);
		}
	}
	return 0;
}