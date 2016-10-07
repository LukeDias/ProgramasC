#include <stdio.h>
#include <math.h>
main()
{
	float c, k;
	printf("Temperatura Celsius:\n");
	scanf("%f",&c);
	k = c + 273;
	printf("Temperatura Kelvin = %f\n",k);
}