#include <stdio.h>
void print_gewei_shiwei(int num);
int main (void)
{
	int x = 0;
	scanf("%d",&x);
	print_gewei_shiwei(x);
	return 0;
}
//函数功能：打印x的个位和十位
void print_gewei_shiwei(int num)
{
	int gewei = num%10;
	int shiwei = num/10%10;
	printf ("%d的个位是：%d,十位是：%d",num,gewei,shiwei);
}
