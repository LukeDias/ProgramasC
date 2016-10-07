#include <stdio.h>
#include <math.h>
main()
{
	float a, b, c, d, r, s;
	printf("A:\n");
	scanf("%f",&a);
	printf("B:\n");
	scanf("%f",&b);
	printf("C:\n");
	scanf("%f",&c);
	r = pow(a+b,2);
	s = pow(b+c,2);
	d = (r+s)/2;
	printf("Distancia = %f\n",d);
}