#include <stdio.h>
void nixushuchu(int num);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	nixushuchu(n);
	return 0;
}
//函数功能：逆序输出数字
void nixushuchu(int num)
{
	if(num)
	{
		printf ("%d",num%10);
		nixushuchu(num / 10);
	}
}
