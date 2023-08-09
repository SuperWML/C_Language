#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int arr[n];
	int sum = 0;
	int min_count = 0;
	int plus_count = 0;
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n;i++)
	{
		if(arr[i] < 0)
		{
			min_count++;
		}
		else if(arr[i] > 0)
		{
			sum += arr[i];
			plus_count++;
		}
	}
	if(sum == 0)
	{
		printf ("0 0.0");
	}
	else
	{
		printf ("%d %.1f",min_count,(float)sum/plus_count);
	}
	return 0;
}
