#include <stdio.h>
#include <math.h>
int main (void)
{
	float n1,n2,n3;
	scanf("%f %f%f",&n1,&n2,&n3);
	float cir = n1+n2+n3;
	float p = 0.5*cir;
	float area = sqrt(p*(p-n1)*(p - n2)*(p - n3));
	printf ("circumference=%.2f area=%.2f",cir,area);
	return 0;
}
