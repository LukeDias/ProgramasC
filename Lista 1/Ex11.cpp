#include <stdio.h>
#include <math.h>
main()
{
	float x1, y1, x2, y2, d, x, y;
	printf("X1:\n");
	scanf("%f",&x1);
	printf("Y1:\n");
	scanf("%f",&y1);
	printf("X2:\n");
	scanf("%f",&x2);
	printf("Y2:\n");
	scanf("%f",&y2);
	x = pow(x2-x1,2);
	y = pow(y2-y1,2);
	d = sqrt(x+y);
	printf("Distancia = %f\n",d);
}