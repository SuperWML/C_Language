#include <stdio.h>
int Age(int number);
int main (void)
{
	printf ("%d",Age(5));
	return 0;
}
int Age(int number)
{
	int age = 0;
	if(number == 1)
	{
		age = 10;
	}
	else
	{
		age = Age(number - 1) + 2;
	}
	return age;
}
