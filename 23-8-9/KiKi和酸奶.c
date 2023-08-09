#include <stdio.h>
int main (void)
{
	int n,h,m;
	scanf("%d %d %d",&n,&h,&m);
	int non_open = n - m/h - m%h;
	printf ("%d",non_open);
	return 0;
}
