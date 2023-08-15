#include <stdio.h>
int main (void)
{
	int m,n;
	int cnt = 0;
	scanf("%d %d",&m,&n);
	int arr1[m][n];
	int arr2[m][n];
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if(arr1[i][j] == arr2[i][j])
			{
				cnt++;
			}
		}
	}
	printf ("%.2f\n",100.0*cnt/(m*n));
	return 0;
}
