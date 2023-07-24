#include <stdio.h>
int max(int a[],int n);
float avergae(int a[],int n);
int count(int a[],int n);

int main (void)
{
	int a[] = {1,2,3,4,5,6,7,8,-1,0};
	int sz = sizeof(a)/sizeof(a[0]);
	printf ("最大值是%d\n",max(a,sz));
	printf ("平均数是%.2f\n",avergae(a,sz));
	printf ("数组中正数元素的个数是%d\n",count(a,sz));
	return 0;
}
//函数功能：求数组中的最大值
int max(int a[],int n)
{
	int max = a[0];
	for(int i = 0;i < n;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
//函数功能：求数组中的平均数
float avergae(int a[],int n)
{
	float sum = 0;
	for(int i = 0;i < n;i++)
	{
		sum+=a[i];
	}
	return sum/n;
}
//函数功能：计算数组中正数元素的个数
int count(int a[],int n)
{
	int count = 0;
	for(int i = 0;i < n;i++)
	{
		if(a[i] > 0)
		{
			count++;
		}
	}
	return count;
}
