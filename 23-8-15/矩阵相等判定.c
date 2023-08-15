#include <stdio.h>
int main (void)
{
	int n,m;
	int mistake = 0;
	scanf("%d %d",&n,&m);
	int arr1[n][m];
	int arr2[n][m];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(arr1[i][j] == arr2[i][j])
			{
				continue;
			}
			else
			{
				mistake = 1;
				break;
			}
		}
		if(mistake)
		{
			break;
		}
	}
	if(mistake)
	{
		printf ("No\n");
	}
	else
	{
		printf ("Yes\n");
	}
	return 0;
}
