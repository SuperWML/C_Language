#include <stdio.h>
int main (void)
{
	int arr[10] = {0};
	int positive = 0;
	int negative = 0;
	for(int i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] > 0)
		{
			positive++;
		}
		else if(arr[i] < 0)
		{
			negative++;
		}
	}
	printf ("positive:%d\nnegative:%d\n",positive,negative);
	return 0;
}
