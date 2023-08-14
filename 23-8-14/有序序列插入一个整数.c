#include <stdio.h>
#define MAX 50
int main (void)
{
	int n = 0;
	int arr[MAX] = {0};
	int val = 0;
	int tmp = 0;
	int count = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] <= val)
		{
			count++;
			continue;
		}
		else if(arr[i] > val)
		{
			tmp = i;
			break;
		}
	}
	if(count == n)
	{
		arr[n] = val;
	}
	else
	{
		for(int i = n-1;i >= tmp;i--)
		{
			arr[i+1] = arr[i];
		}
		arr[tmp] = val;
	}
	for(int i = 0;i < n+1;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
