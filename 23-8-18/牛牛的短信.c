#include <stdio.h>
double Count_Massage(int num);
int main (void)
{
	int n;
	scanf("%d",&n);
	printf ("%.1lf",Count_Massage(n));
	
	return 0;
}
//函数功能：计算每条短信多少钱
double Count_Massage(int num)
{
	double fee = 0;
	for(int i = 0;i < num;i++)
	{
		int a = 0;
		scanf("%d",&a);
		if(a <= 60)
		{
			fee += 0.1;
		}
		else
		{
			fee += 0.2;
		}
	}
	return fee;
}
