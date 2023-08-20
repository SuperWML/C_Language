#include <stdio.h>
int Sigima(int num);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	printf ("%d",Sigima(n));
	return 0;
}
//函数功能：实现“1+2+3+。。。+n”
int Sigima(int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return num + Sigima(num-1);
	}
}
