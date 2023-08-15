#include <stdio.h>
int main (void)
{
	int n,m,x,y,max = 0;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			scanf("%d",&arr[i][j]);
			if(max < arr[i][j])
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf ("%d %d",x+1,y+1);
	
	return 0;
}
