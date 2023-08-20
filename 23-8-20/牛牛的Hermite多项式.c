#include <stdio.h>
int Hermite(int n,int x);
int main (void)
{
	int x,n;
	scanf("%d %d",&n,&x);
	printf ("%d",Hermite(n,x));
	return 0;
}
//函数功能：实现Hermite功能
int Hermite(int n,int x)
{
	if(n == 0)
	{
		return 1;
	}
	else if(n == 1)
	{
		return 2*n;
	}
	else
	{
		return 2*x*Hermite(n-1,x) - 2*(n-1)*Hermite(n - 2,x);
	}
}
