#include <stdio.h>
int digit(int num,int i);
int main (void)
{
	int num = 0;
	int i = 0;
	scanf("%d %d",&num,&i);
	printf ("%d",digit(num,i));
	return 0;
}
//函数功能：实现digit功能
int digit(int num,int i)
{
	if(i == 1)
	{
		return num % 10;
	}
	else
	{
		return digit(num/10,i-1)*10 + num%10;
	}
}
