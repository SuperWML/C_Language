#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c;
	while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	if (a == 0.0)
	{
		printf ("Not quadratic equation\n");
	}
	else
	{
		float x1 = 0,x2 = 0;
		float deleta = b*b-4*a*c;
		if(deleta == 0.0)
		{
			x1 = x2 = (-b+sqrt(deleta))/2.0*a;
			printf ("x1=x2=%.2f",x1);
		}
		else if(deleta > 0)
		{
			x1 = (-b - sqrt(deleta))/2.0*a;
			x2 = (-b + sqrt(deleta))/2.0*a;
			printf ("x1=%.2f;x2=%.2f",x1,x2);
		}
		else
		{
			double real = (-b)/(2.0*a);
			double i = sqrt(-deleta)/(2.0*a);
			printf ("x1=%.2f-%.2fi;x2=%.2f+%.2fi",real,i,real,i);
		}
	}
	
	return 0;
}
