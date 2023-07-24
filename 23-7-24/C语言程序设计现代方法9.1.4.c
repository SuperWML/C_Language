#include <stdio.h>
#include <stdbool.h>
int day_of_year(int month,int day,int year);
bool Is_Leap_Year(int year);
int main (void)
{
	printf ("%d",day_of_year(2,13,2000));
	return 0;
}
//函数功能：输入年月日，返回这个年月日是这一年的哪一天
int day_of_year(int month,int day,int year)
{
	int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i = 0;
	int sum = 0;
	if(Is_Leap_Year(year) == 1)
	{
		arr[1] = 29;
	}
	for(i = 0;i < month-1;i++)
	{
		sum += arr[i];
	}
	sum += day;
	return sum;
}
//函数功能：判断是不是闰年
bool Is_Leap_Year(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
