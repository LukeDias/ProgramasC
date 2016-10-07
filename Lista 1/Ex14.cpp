#include <stdio.h>
#include <math.h>
main()
{
	float d, c, t;
	printf("Distancia percorrida (km):\n");
	scanf("%f",&d);
	printf("Consumo de gasolina (l):\n");
	scanf("%f",&c);
	t = d/c;
	printf("Taxa de Consumo = %f (km/l)\n",t);
}