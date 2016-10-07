#include<stdio.h>
main()
{
	float c, f;
	printf("Digite a temperatura em Celsius:");
	scanf("%f",&c);
	f = (9*c+160)/5;
	printf("%f F",f);
}
