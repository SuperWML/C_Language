#include <stdio.h>
int main (void)
{
	int n = 0;
	int ans = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		int tmp = 0;
		scanf("%d",&tmp);
		ans ^= tmp;
	}
	printf ("%d\n",ans);
	//return 0;
	return 0;
}
