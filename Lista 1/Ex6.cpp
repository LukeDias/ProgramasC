#include<stdio.h>
main()
{
	float a, vf, vi, t;
	printf("Velocidade Inicial:");
	scanf("%f",&vi);
	printf("Velocidade Final:");
	scanf("%f",&vf);
	printf("Intervalo de Tempo:");
	scanf("%f",&t);
	a = (vf-vi)/t;
	printf("Aceleracao = %f ms^2",a);
}
