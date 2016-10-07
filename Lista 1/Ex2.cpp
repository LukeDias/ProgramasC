#include<stdio.h>
main()
{
	float q, d, r;
	printf("Digite a cotacao do Dolar:");
	scanf("%f",&d);
	printf("Digite a quantidade desejada:");
	scanf("%f",&q);
	r = q*d;
	printf("R$ %f",r);	
}
