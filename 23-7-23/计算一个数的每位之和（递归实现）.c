#include <stdio.h>
int DigitSum(int number);
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	printf ("%d的每位之和是%d",num,DigitSum(num));
	return 0;
}
//函数功能：计算每一个数的每位之和
int DigitSum(int number)
{
	if(number < 10)
	{
		return number;
	}
	else
	{
		return DigitSum(number/10) + (number%10);
	}
}
