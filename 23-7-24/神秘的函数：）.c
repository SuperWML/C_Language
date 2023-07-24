#include <stdio.h>
void pb(int n);
int main (void)
{
	pb(2);
	return 0;
}
//函数功能：神秘的函数
void pb(int n)
{
	if(n != 0)
	{
		pb(n / 2);
		putchar('0' + n%2);
	}
}
