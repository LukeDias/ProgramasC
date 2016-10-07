#include <stdio.h>
#include <math.h>
main()
{
	int t, h, m, s;
	printf("Tempo de duracao (s):\n");
	scanf("%d",&t);
	h = (t/3600);
	m=(t-(h*3600))/60;
	s=t-(h*3600)-(m*60);
	printf("%d:%d:%d\n",h, m, s );

}