#include <stdio.h>
int Five(int num1,int num2);
int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf ("%d",Five(a,b));
	return 0;
}
//函数功能：实现数位五五的功能
int Five(int num1,int num2)
{
	int count = 0;
	int sum = 0;
	for(int i = num1;i <= num2;i++)
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
