#include <stdio.h>
void Print_Single_Number(int number);
int main (void)
{
	int number = 0;
	scanf("%d",&number);
//	while(scanf("%d",&number) == 1)
//	{
//		while(1)
//		{
//			printf ("%d",number%10);
//			number /= 10;
//			if(number == 0)
//			{
//				break;
//			}
//		}
//		printf ("\n");
//	}
//	递归写法：
	Print_Single_Number(number);
	return 0;
}
//函数功能：倒序输出一个数的每一位的递归写法
void Print_Single_Number(int number)
{
	if(number < 10)
	{
		printf ("%d",number);
	}
	else
	{
		printf ("%d",number%10);
		Print_Single_Number(number/10);
	}
}
