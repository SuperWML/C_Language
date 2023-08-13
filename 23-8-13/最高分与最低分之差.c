#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int arr[n];
	int max = 0;
	int min = 100;
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf ("%d",max - min);
	return 0;
}
