#include <stdio.h>
main()
{
	float r, v;
	printf("Raio:\n");
	scanf("%f",&r);
	v = (4/3)*3.1415*(r*r*r);
	printf("Volume = %f\n",v);
}