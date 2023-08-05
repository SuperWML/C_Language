#include <stdio.h>
//方法2，非递归实现斐波那契数列，这是我自己想出来的！！
int main (void)
{
	int num1 = 1;
	int num2 = 1;
	int num3 = 0;
	int i = 0;
	int j = 0;
	scanf("%d",&j);
	if(j == 1 || j == 2)
	{
		num1 = 1;
		num2 = 1;
		num3 = num1;
	}
	else
	{
		for(i = 3;i <= j;i++)
		{
			num3 = num1+num2;
			num1 = num2;
			num2 = num3;
		}
	}
	printf ("%d",num3);
}
