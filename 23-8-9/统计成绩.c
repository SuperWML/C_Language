#include <stdio.h>
int main (void)
{
	int n = 0;
	float max = 0;
	float min = 0;
	scanf("%d",&n);
	float arr[n];
	float sum = 0;
	int i = 0;
	for(i = 0;i < n;i++)
	{
		scanf("%f",&arr[i]);
	}
	max = arr[0],min = arr[0];
	for(i = 0;i < n;i++)
	{
		sum += arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf ("%.2f %.2f %.2f",max,min,sum/n);
	return 0;
}
