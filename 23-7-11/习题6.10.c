#include <stdio.h>
int main (void)
{
	int num = 0;
	int gewei,shiwei,baiwei;
	for(num = 100;num < 1000;num++)
	{
		gewei = num % 10;
		baiwei = num / 100;
		shiwei = num / 10 % 10;
		if((gewei*gewei*gewei + baiwei*baiwei*baiwei + shiwei * shiwei * shiwei) == num)
		{
			printf ("%d ",num);
		}
	}
	return 0;
}
