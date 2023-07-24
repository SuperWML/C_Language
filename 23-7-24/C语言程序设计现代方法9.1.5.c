#include <stdio.h>
int num_digits(int number);
int main (void)
{
	int i = 0;
	scanf("%d",&i);
	printf ("%d",num_digits(i));
	return 0;
}
//函数功能：返回正整数n中数字的个数
int num_digits(int number)
{
	if(number < 10)
	{
		return 1;
	}
	else
	{
		return 1+num_digits(number/10);
	}
}
