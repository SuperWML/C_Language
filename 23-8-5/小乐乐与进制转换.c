#include <stdio.h>
void Print(int number);
int main (void)
{
	int number = 0;
	scanf("%d",&number);
	Print(number);
	return 0;
}
//函数功能：6进制转换
void Print(int number)
{
	if(number > 5)
	{
		Print(number/6);
	}
	printf ("%d",number%6);
}
