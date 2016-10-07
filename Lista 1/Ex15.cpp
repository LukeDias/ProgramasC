#include <stdio.h>
#include <math.h>
main()
{
	float a, m, d, i;
	printf("Anos:\n");
	scanf("%f",&a);
	printf("Meses:\n");
	scanf("%f",&m);
	printf("Dias:\n");
	scanf("%f",&i);
	i = (a*365)+(m*30)+d;	
	printf("Idade = %f dias.\n",i);
}