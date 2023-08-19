#include <stdio.h>
#include <math.h>
int fi(long long num);
int main (void)
{
	long long n = 0;
	scanf("%lld",&n);
	getchar();
	while(n--)
	{
		long long num;
		scanf("%lld",&num);
		getchar();
		int ans = fi(num);
		printf ("%d %d\n",ans,(int)pow(2,fi(num)-1));
	}
	return 0;
}
//函数功能：根据公式计算n项的数目
int fi(long long num)
{
	if(num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return fi(num/2) + fi(num%2);
	}
}
