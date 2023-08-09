#include <stdio.h>
int main (void)
{
	int hour = 0;
	int min_now = 0;
	int min = 0;
	scanf("%d:%d %d",&hour,&min_now,&min);
	printf ("%02d:%02d",(hour+min/60)%24 + (min_now+min%60)/60,(min_now+min%60)%60);
	return 0;
}
