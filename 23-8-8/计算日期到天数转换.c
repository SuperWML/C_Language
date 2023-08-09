#include <stdio.h>
int main (void)
{
	int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int year = 0;
	int momth = 0;
	int day = 0;
	int sum = 0;
	scanf("%d %d %d",&year,&momth,&day);
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		month_day[1] = 29;
	}
	else
	{
		month_day[1] = 28;
	}
	for(int i = 1;i < momth;i++)
	{
		sum += month_day[i-1];
	}
	printf ("%d",sum+day);
	return 0;
}
