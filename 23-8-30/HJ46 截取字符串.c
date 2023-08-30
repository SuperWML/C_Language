#include <stdio.h>
int main (void)
{
	char arr[1000] = {0};
	int n = 0;
	gets(arr);
	scanf("%d",&n);
	for(int i = 0;i <n;i++)
	{
		printf ("%c",arr[i]);
	}
	return 0;
}
