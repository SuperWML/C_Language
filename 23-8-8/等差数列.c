#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	int arr[num];
	int sum = 0;
	for(int i = 0,j = 2;i < num && j <= 2+(num-1)*3;i++,j += 3)
	{
		arr[i] = j;
	}
	for(int i = 0;i < num;i++)
	{
		sum += arr[i];
	}
	printf ("%d",sum);
}
