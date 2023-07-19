//#include <stdio.h>
//int feibonaqishulie(int n);
//int main (void)
//{
//	printf ("12个月一共生了%d对兔子",feibonaqishulie(12));
//	return 0;
//}
////函数功能：计算斐波那契数列
//int feibonaqishulie(int n)
//{
//	if(n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return feibonaqishulie(n-1) + feibonaqishulie(n-2);
//	}
//}
#include<stdio.h>                     

int main ()

{
	
	int i,n,item,n1=1,n2=1;
	
	scanf("%d",&n);
	
	if(n==1||n==2)
		
		item=1;
	
	for(i=3;i<=n;i++)
		
	{
		
		item=n1+n2;
		
		n2=n1;
		
		n1=item;
		
	}
	
	printf("%d",item);
	
}
