#include <stdio.h>
int count_2(int num1,int num2);
int main (void)
{
	int l,r;
	scanf("%d %d",&l,&r);
	printf ("%d",count_2(l,r));
	return 0;
}
//函数功能：计算范围中每位2的个数
int count_2(int num1,int num2)
{
	int count = 0;
	for(int i = num1;i <= num2;i++)
	{
		int tmp = i;
		while(tmp)
		{
			if(tmp % 10 == 2)
			{
				count++;
			}
			tmp /= 10;
		}
	}
	return count;
}
