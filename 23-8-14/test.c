#include <stdio.h>
#define MAX 500
int main (void)
{	
	int count = 1;
	char arr[MAX] = {0};
	scanf("%s",arr);
	for(int i = 0;arr[i] != '\0';i++)
	{
		if(arr[0] != arr[i])
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
