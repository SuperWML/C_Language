#include <stdio.h>

int LCM(int a,int b);

int main (void)
{
	int num1,num2;
	
	scanf("%d %d",&num1,&num2);
	printf ("%d和%d的最小公倍数是：%d",num1,num2,LCM(num1,num2));
	
	return 0;
}

int LCM(int a,int b)
{
	int i;
	int find = 0;
	for(i = 0;!find;i++)
	{
		if(i % a == 0 && i % b == 0 && i != 0)
		{
			return i;
		}
	}
}
