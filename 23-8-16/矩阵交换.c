#include <stdio.h>
int main (void)
{
	int n,m;
	int k = 0;
	char t = 0;                          //t表示要执行的操作，t是r表示行变换，t是c表示列变换，是其他字符不需要处理
	int a = 0,b = 0;                     //a,b表示用来互换的行和列
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&k);
	getchar();
//	for(int i = 0;i < k;i++)
//	{
//		scanf("%c %d %d",&t,&a,&b);
//	}
	for(int i = 0;i < k;i++)
	{
		scanf("%c %d %d",&t,&a,&b);
		getchar();
		if(t == 'r')
		{
			for(int j = 0;j < m;j++)
			{
				int tmp = arr[a-1][j];
				arr[a-1][j] = arr[b-1][j];
				arr[b-1][j] = tmp;
			}
//			for(int i1 = 0;i1 < n;i1++)
//			{
//				for(int j1 = 0;j1 < m;j1++)
//				{
//					printf ("%d ",arr[i1][j1]);
//				}
//				printf ("\n");
//			}
		}
		else if(t == 'c')
		{
			for(int j = 0;j < n;j++)
			{
				int tmp = arr[j][b-1];
				arr[j][b-1] = arr[j][a-1];
				arr[j][a-1] = tmp;
			}
//			for(int i1 = 0;i1 < n;i1++)
//			{
//				for(int j1 = 0;j1 < m;j1++)
//				{
//					printf ("%d ",arr[i1][j1]);
//				}
//				printf ("\n");
//			}
		}
		else
		{
			continue;
		}
	}
	for(int i1 = 0;i1 < n;i1++)
	{
		for(int j1 = 0;j1 < m;j1++)
		{
			printf ("%d ",arr[i1][j1]);
		}
		printf ("\n");
	}
	return 0;
}
