#include <stdio.h>
int main (void)
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d",&year,&month,&day);
	printf ("year=%d\nmonth=%02d\ndate=%02d",year,month,day);
	return 0;
}
