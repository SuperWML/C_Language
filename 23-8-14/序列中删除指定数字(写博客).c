#include <stdio.h>
#define MAX 50
int main (void)
{
	int n = 0;
	int arr[MAX] = {0};
	int locate = 0;
	int val = 0;
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&val);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == val)
		{
			for(int j = i;j < n;j++)
			{
				arr[j] = arr[j+1];
			}
			n--;
			i = -1;
		}
	}
	for(int i = 0;i < n;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
