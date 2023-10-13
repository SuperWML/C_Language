#include <stdio.h>
int five(int num1,int num2);
int main (void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	printf("%d",five(a,b));
	return 0;
}
int five(int num1,int num2)
{
	int count = 0;
	for(int i = num1;i <= num2;i++)
	{
		int sum = 0;
		int tmp = i;
		while(tmp)
		{
			sum += tmp%10;	
			tmp /= 10;
		}
		if(sum % 5 == 0)
		{
			count++;
		}
	}
	return count;
}
