#include <stdio.h>
int main (void)
{
	int n = 0;
	int x = 1;
	scanf("%d",&n);
	int up = 0,right = n-1,down = n-1,left = 0;
	int arr[n][n];
	while(x <= n*n)
	{
		for(int i = left;i <= right;i++)
		{
			arr[up][i] = x++;
		}
		up++;
		for(int i = up;i <= down;i++)
		{
			arr[i][right] = x++;
		}
		right--;
		for(int i = right;i >= left;i--)
		{
			arr[down][i] = x++;
		}
		down--;
		for(int i = down;i >= up;i--)
		{
			arr[i][left] = x++;
		}
		left++;
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			printf ("%d ",arr[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
