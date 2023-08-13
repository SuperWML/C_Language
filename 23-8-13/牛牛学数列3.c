#include <stdio.h>
int main (void)
{
	int n = 0;
	int flag = 1;
	double sum = 0.0;
	for(int i = 1;i <= n;i++)
	{
		sum += flag*1.0/i;
		flag = -flag;
	}
	printf ("%.3f",sum);
	return 0;
}
