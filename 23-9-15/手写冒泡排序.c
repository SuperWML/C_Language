#include <stdio.h>
int main (void)
{
	int arr[] = {1,3,5,7,9,2,4,6,8,10};
	for(int i = 0;i < 10-1;i++)
	{
		for(int j = 0;j < 10-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i < 10;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
