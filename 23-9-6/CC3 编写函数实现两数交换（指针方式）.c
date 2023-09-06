#include <stdio.h>
void swap(int* num1,int* num2);
int main (void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf ("%d %d",a,b);
	return 0;
}
//函数功能：实现两数字的交换
void swap(int* num1,int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
