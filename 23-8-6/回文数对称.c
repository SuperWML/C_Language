#include <stdio.h>
int main (void)
{
	int number = 0;
	scanf("%d",&number);
	int tmp = 0;
	for(int i = 1;i <= number;i++)
	{
		int tmp2 = i;
		tmp = 0;
		while(tmp2)
		{
			tmp = tmp*10 + tmp2%10;
			tmp2 /= 10;
		}
		if(tmp == i)
		{
			printf ("%d ",i);
		}
	}

	return 0;
}
