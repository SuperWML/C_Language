#include <stdio.h>
void douhao(int n);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	douhao(n);
	return 0;
}
//函数功能：在数字后面加逗号
void douhao(int n)
{
	if(n < 1000)
	{
		printf ("%d",n);
	}
	else
	{
		douhao(n/1000);
		printf (",%03d",n%1000);
	}
}
