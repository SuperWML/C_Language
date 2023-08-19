#include <stdio.h>
#include <math.h>
int Is_Pow(int num);
int main (void)
{
	int n = 0;
	int number = 0;
	int max = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&number);
		if(Is_Pow(number))
		{
			continue;
		}
		else
		{
			if(max <number)
			{
				max = number;
			}
		}
	}
	printf ("%d",max);
	return 0;
}
//函数功能：判断是否是平方数
int Is_Pow(int num)
{
	int a = (int)sqrt(num);
	if(a*a == num)
	{
		return 1;
	}
	return 0;
}
