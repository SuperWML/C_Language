#include <stdio.h>
int main (void)
{
	int n,m;
	char c1 = 0,c2 = 0;
	int l = 0,r = 0;
	scanf("%d %d",&n,&m);
	char arr[n+1];
	scanf("%s",arr);
	for(int i = 0;i < m;i++)
	{
		scanf("%d %d %c %c",&l,&r,&c1,&c2);
		while(l <= r)
		{
			if(arr[l-1] == c1)
			{
				arr[l-1] = c2;
			}
			l++;
		}
	}
	printf ("%s",arr);
	return 0;
}
