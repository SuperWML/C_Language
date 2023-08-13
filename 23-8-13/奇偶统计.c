#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int odd = 0;
	int even = 0;
	for(int i = 1;i <= n;i += 2)
	{
		odd++;
	}
	for(int i = 2;i <= n;i += 2)
	{
		even++;
	}
	printf ("%d %d",odd,even);
	return 0;
}
