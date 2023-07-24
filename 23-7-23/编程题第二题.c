#include <stdio.h>
double My_pow(double number,double pow);

int main (void)
{
	int i = 0;
	int j = 0;
	scanf ("%d %d",&i,&j);
	printf ("%d的%d次方是：%d",i,j,(int)My_pow(i,j));
	return 0;
}

//函数功能：递归实现n的k次方
double My_pow(double number,double pow)
{
	if(pow == 0)
	{
		return 1.0;
	}
	else
	{
		return number*My_pow(number,pow-1);
	}
}
