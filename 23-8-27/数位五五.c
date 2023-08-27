#include <stdio.h>
int digit(int a,int b);
int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",digit(a,b));
	return 0;
}
//函数功能：实现数位五五的功能
int digit(int a,int b)
{
	int count = 0;
	int sum = 0;
	for(int i = a;i <= b;i++)
	{
		sum = 0;
		int tmp = i;
		while(tmp)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if(sum % 5 == 0)
		{
			count++;
		}
	}
	return count;
}
