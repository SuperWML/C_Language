#include <stdio.h>
int main (void)
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		ret ^= arr[i];
	}
	printf ("%d",ret);
	return 0;
}
