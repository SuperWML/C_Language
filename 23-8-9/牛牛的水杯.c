#include <stdio.h>
int main(void)
{
	int h=0,r=0;
	scanf("%d%d",&h,&r);
	float v=h*3.14*r*r;
	int c=10000;
	int d=0;
	while(c>0)
	{
		c=c-v;
		d++;
	}
	printf("%d",d);
	return 0;
}

