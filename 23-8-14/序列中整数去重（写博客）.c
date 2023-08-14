#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	int g = 0;
	for(int i = 0;i < n;i++)
	{
		int sum = 0;
		scanf("%d",&arr1[i]);
		for(int j = 0;j < i;j++)
		{
			if(arr1[i] == arr2[j])
			{
				sum = 1;
				break;
			}
		}
		if(sum == 0)
		{
			arr2[g] = arr1[i];
			g++;
		}
	}
	for(int i = 0;i < g;i++)
	{
		printf ("%d ",arr2[i]);
	}
	return 0;
}
