#include <stdio.h>
#define MAX 501
int main (void)
{
	char arr[MAX] = {0};
	char count[128] = {0};
	int sum = 0;
	scanf("%s",arr);
	for(int i = 0;arr[i] != '\0';i++)
	{
		count[arr[i]]++;
		
	}
	for(int i = 0;i < 128;i++)
	{
		if(count[i])
		{
			sum++;
		}
	}
	printf ("%d",sum);
	return 0;
}
