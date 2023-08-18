#include <stdio.h>
int Magic(int num);
int main (void)
{
	int a = 0;
	scanf("%d",&a);
	printf ("%d",Magic(a));
	return 0;
}
//函数功能：取出每位的输出的和
int Magic(int num)
{
	if(num < 10)
	{
		return num;
	}
	else
	{
		int sum = 0;
		while(num > 0)
		{
			sum += num % 10;
			num /= 10;
		}
		return Magic(sum);
	}
}
