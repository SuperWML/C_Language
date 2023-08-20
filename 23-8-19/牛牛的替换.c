#include <stdio.h>
int main (void)
{
	int n = 0;
	char ch[4] = {0};
	scanf("%d",&n);
	getchar();
	for(int i = 0;i < 4;i++)
	{
		scanf("%c",&ch[i]);
		getchar();
	}
	char arr[n+1];
	scanf("%s",arr);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == ch[0])
		{
			arr[i] = ch[1];
			i = -1;
		}
		if(arr[i] == ch[2])
		{
			arr[i] = ch[3];
			i = -1;
		}
	}
	printf ("%s",arr);
	return 0;
}
