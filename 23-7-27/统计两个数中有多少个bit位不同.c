#include <stdio.h>
int Count_Binary(int a);
int main (void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	printf ("%d和%d中有%d个不同的二进制位",a,b,Count_Binary(a^b));
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
