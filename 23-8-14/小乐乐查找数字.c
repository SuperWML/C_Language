#include <stdio.h>
int main (void)
{
	int n = 0;
	int count = 0;
	int val = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == val)
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
