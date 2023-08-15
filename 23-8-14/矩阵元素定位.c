#include <stdio.h>
int main (void)
{
	int m,n,m1,m2;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d %d",&m1,&m2);
	printf ("%d",arr[m1-1][m2-1]);
	return 0;
}
