#include <stdio.h>
#include <math.h>
int main (void)
{
	int weight = 0;
	double height = 0;
	scanf("%d %lf",&weight,&height);
	double BMI = weight/pow(height,2);
	if(18.5 <= BMI && BMI <= 23.9)
	{
		printf ("Normal\n");
	}
	else
	{
		printf ("Abnormal\n");
	}
	return 0;
}
