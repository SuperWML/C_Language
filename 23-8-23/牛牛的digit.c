#include <stdio.h>
int digit(int x,int i);
int main (void)
{
	int x,i;
	scanf("%d %d",&x,&i);
	printf ("%d",digit(x,i));
	return 0;
}
//函数功能：实现digit功能
int digit(int x,int i)
{
	if(i == 1)
	{
		return x%10;
	}
	else
	{
		return x%10 + digit(x/10,i-1) * 10;
	}
}
