#include <stdio.h>
void PrintNumber(int number);
int main (void)
{
	int i = 0;
	scanf("%d",&i);
	PrintNumber(i);
	return 0;
}
//函数功能：递归实现打印数的每一位
void PrintNumber(int number)
{
	if(number > 9)
	{
		PrintNumber(number/10);
	}
	printf ("%d ",number%10);
}
