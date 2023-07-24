#include <stdio.h>
//方法二：非递归方法求阶乘
int main (void)
{
	int i = 0;
	int result = 1;
	scanf("%d",&i);
	int j = i;
	while(i > 0)
	{
		result *= i;
		i--;
	}
	printf ("%d的阶乘是%d",j,result);
	return 0;
}
////方法一：递归方法求阶乘
//int jiecheng(int number);
//int main (void)
//{
//	int i = 10;
//	scanf("%d",&i);
//	printf ("%d的阶乘是%d",i,jiecheng(i));
//	return 0;
//}
//int jiecheng(int number)
//{
//	if(number == 0 || number == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return number*jiecheng(number-1);
//	}
//}
