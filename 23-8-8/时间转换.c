#include <stdio.h>
int main (void)
{
	int seconds = 0;
	scanf("%d",&seconds);
	int h = 0;
	int min = 0;
	int second = 0;
	h = seconds/3600;
	min = seconds/60%60;
	second = seconds%60;
	printf ("%d %d %d",h,min,second);
}
