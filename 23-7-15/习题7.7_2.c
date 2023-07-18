#include <stdio.h>

int Gcd(int num1,int num2);

int main (void)
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	printf ("%d",Gcd(num1,num2));
	return 0;
}
int Gcd(int num1,int num2)
{
	int r = num1 % num2;
	if(r != 0)
	{
		Gcd(num2,r);
	}
	else
	{
		return num2;
	}
}
