#include <stdio.h>

int Count_Binary(int a);

int main (void)
{
	int a = 15;
	printf ("%d",Count_Binary(a));
	return 0;
}
//函数功能：计算整数中的二进制位数
int Count_Binary(int a)
{
	int count = 0;
	for(int i = 0;i < (int)sizeof(int)*8;i++)
	{
		if((a & 1) == 1)
		{
			count++;
		}
		a >>= 1;
	}
	return count;
}
