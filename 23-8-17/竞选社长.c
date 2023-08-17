#include <stdio.h>
int main (void)
{
	char arr[10] = {0};
	int count_A = 0;
	int count_B = 0;
	scanf("%s",arr);
	for(int i = 0;arr[i] != '\0';i++)
	{
		if(arr[i] == 'A')
		{
			count_A++;
		}
		else if(arr[i] == 'B')
		{
			count_B++;
		}
	}
	if(count_A > count_B)
	{
		printf ("A\n");
	}
	else if(count_B > count_A){
		printf ("B\n");
	}
	else
	{
		printf ("E\n");
	}
	return 0;
}
