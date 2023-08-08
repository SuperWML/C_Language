#include <stdio.h>
int main (void)
{
	int arr[3] = {0};
	for(int i = 0;i < 3;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < 3;i++)
	{
		printf ("%-8d",arr[i]);
	}
	return 0;
}
