#include <stdio.h>
//方法一：递归实现斐波那契数列
int feibonaqishulie(int number);

int main (void)
{
	int i = 0;
	scanf("%d",&i);
	printf ("%d",feibonaqishulie(i));
	return 0;
}
//函数功能：使用递归实现斐波那契数列
int feibonaqishulie(int number)
{
	if(number <= 2)
	{
		return 1;
	}
	else
	{
		return feibonaqishulie(number-1)+feibonaqishulie(number-2);
	}
}
//int main (void)
//{
//	int i = 0;
//	int num1 = 1;
//	int num2 = 1;
//	int num3 = 0;
//	scanf("%d",&i);
//	while(i > 0)
//	{
//		num3 = num1+num2;
//		num1 = num2;
//		num2 = num3;
//		i--;
//	}
//	printf ("第%d的斐波那契数列的值是%d",i,num3);
//	
//	return 0;
//}
