#include <stdio.h>
int main(void)
{
	int num = 0;
	scanf("%d",&num);
	int arr[num];
	int ret = 0;
	for(int i = 0;i < num;i++)
	{
		scanf("%d",&arr[i]);
		ret ^= arr[i];
	}
	printf ("%d",ret);
	return 0;
}
