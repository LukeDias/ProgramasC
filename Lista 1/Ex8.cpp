#include <stdio.h>
main()
{
	float r, h, v;
	printf("Altura:");
	scanf("%f",&h);
	printf("Raio:");
	scanf("%f",&r);
	v = 3.1415*(r*r)*h;
	printf("Volume = %f",v);
	
}
