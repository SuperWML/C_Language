#include <stdio.h>
int five(int a,int b);
int main (void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	printf ("%d",five(a,b));
	return 0;
}
//函数功能：实现数位五五功能
int five(int a,int b)
{
	int count = 0;
	for(int i = a;i <= b;i++)
	{
		int sum = 0;
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
