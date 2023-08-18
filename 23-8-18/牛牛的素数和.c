#include <stdio.h>
#include <math.h>
int Is_Prime(int num);
int main (void)
{
	int a,b;
	int sum = 0;
	scanf("%d %d",&a,&b);
	for(int i = a;i <= b;i++)
	{
		if(Is_Prime(i))
		{
			sum += i;
		}
	}
	printf ("%d",sum);
	return 0;
}
//函数功能：判断是不是素数
int Is_Prime(int num)
{
	int flag = 1;
	for(int i = 1;i <= sqrt(num);i++)
	{
		if((num % i == 0) && (i != 1))
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
