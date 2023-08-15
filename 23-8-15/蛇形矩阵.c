#include <stdio.h>
int arr[1000][1000];
int main (void)
{
	int n = 0;
	int count = 1;
	scanf("%d",&n);

	for(int i = 1;i <= 2*n-1;i++)            //控制斜向上操作的次数
	{
		int a = 1,b = i;                    //a控制列，b控制行
		while(b >= 1)
		{
			if(a <= n && b <= n)
			{
				if(i % 2 == 1)
				{
					arr[b][a] = count++;
				}
				else
				{
					arr[a][b] = count++;
				}

			}

			a++,b--;
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			printf ("%d ",arr[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
