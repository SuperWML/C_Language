#include <stdio.h>
int main (void)
{
	int n,m;
	int sum = 0;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(arr[i][j] > 0)
			{
				sum += arr[i][j];
			}
		}
	}
	printf ("%d",sum);
	return 0;
}
