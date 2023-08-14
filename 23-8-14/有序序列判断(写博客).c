#include <stdio.h>
int main (void)
{
	int n = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < n-1;i++)
	{
		if(arr[i+1] - arr[i] >= 0)
		{
			cnt1++;
		}
		else if(arr[i] - arr[i+1] >= 0)
		{
			cnt2++;
		}
	}
	if(cnt1 == n-1 || cnt2 == n-1)
	{
		printf ("sorted\n");
	}
	else
	{
		printf ("unsorted\n");
	}
	return 0;
}
