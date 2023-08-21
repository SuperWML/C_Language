#include <stdio.h>
int main (void)
{
	char arr[14] = {0};
	int sum = 0;
	gets(arr);
	for(int i = 0,j = 1;i != 12;i++)
	{
		if(arr[i] != '-')
		{
			sum += (arr[i] - '0') * j;
			j++;
		}
		else
		{
			continue;
		}
	}
	if(arr[12] != 'X' && sum % 11 == (arr[12] - '0') )
	{
		printf ("Right\n");
	}
	else if(arr[12] == 'X')
	{
		if(sum % 11 == 10)
		{
			printf ("Right\n");
		}
		else
		{
				arr[12] = (sum % 11 + '0');
				puts(arr);
		}
	}
	else
	{
		if(sum % 11 == 10)
		{
			arr[12] = 'X';
			puts(arr);
		}
		else
		{
			arr[12] = (sum % 11 + '0');
			puts(arr);
		}
	}

	return 0;
}
