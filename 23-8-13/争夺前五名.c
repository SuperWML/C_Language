#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n-1;i++)
	{
		int tmp = 0;
		for(int j = 0;j < n-i-1;j++)
		{
			if(arr[j] < arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i < 5;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
