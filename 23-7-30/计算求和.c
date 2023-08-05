#include <stdio.h>
int Sum(int num);
int main (void)
{
	int number = 0;
	scanf("%d",&number);
	printf ("%d",Sum(number));
}
//求和函数，获取2，就会返回2+22+222+2222+22222
int Sum(int num)
{
	if(num > 10000)
	{
		return num;
	}
	else
	{
		return num+Sum(num%10 + num*10);
	}
}
