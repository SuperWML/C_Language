//#include <stdio.h>
//long int Max_gys(long int num1,long int num2);
//long int Min_gbs(long int num1,long int num2);
//int main (void)
//{
//	long int a = 0;
//	long int b = 0;
//	while(scanf("%ld %ld",&a,&b) != EOF)
//	{
//		printf ("%ld\n",Max_gys(a,b) + Min_gbs(a,b));
//	}
//	
//	return 0;
//}
////函数功能：求最大公约数
//long int Max_gys(long int num1,long int num2)
//{
//	long int min = num1<num2 ? num1 : num2;
//	for(int i = min;i >= 1;i--)
//	{
//		if((num1 % i == 0) && (num2 % i == 0))
//		{
//			return i;
//		}
//	}
//	return 0;
//}
////函数功能：求最小公倍数
//long int Min_gbs(long int num1,long int num2)
//{
//	long int max = num2*num1;
//	for(int i = 1;i <= max;i++)
//	{
//		if((i % num1 == 0) && (i % num2 == 0))
//		{
//			return i;
//		}
//	}
//	return 0;
//}

//简便算法
int main()
{
	long long n,m;
	scanf("%lld %lld",&n,&m);
	//求最大公约数
	long long max = 0;
	long long min = 0;
	long long tmp = 0;
	//先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
	long long a = n;
	long long b = m;
	
	//辗转相除法
	while(tmp=n%m)
	{
		n = m;
		m = tmp;
	}
	max = m;
	//最小公倍数=n*m/max
	min = a*b/max;
	printf("%lld",min+max);
	return 0;
}
