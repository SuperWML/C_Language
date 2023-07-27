#include <stdio.h>
int main (void)
{
	int a = 3;
	int b = 5;
	printf ("未交换前，a和b得值是：%d %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf ("交换后，a和b得值是：%d %d\n",a,b);
	return 0;
}
