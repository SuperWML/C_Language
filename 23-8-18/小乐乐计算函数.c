#include <stdio.h>
double max3(int num1,int num2,int num3);
int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double m = max3(a+b,b,c)/(max3(a,b+c,c) + max3(a,b,b+c));
	printf ("%.2lf",m);
	return 0;
}
//函数功能：查找三个数的最大值
double max3(int num1,int num2,int num3)
{
	int max = num1;
	if(max < num2)
	{
		max = num2;
	}
	if(max < num3)
	{
		max = num3;
	}
	return max;
}
