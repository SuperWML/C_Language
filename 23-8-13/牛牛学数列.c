#include <stdio.h>
int main (void)
{
	int i = 0;
	int flag = 1;
	int n = 0;
	int sum = 0;
	
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		sum += flag*i;
		flag = -flag;
	}
	printf ("%d",sum);
	return 0;
}
