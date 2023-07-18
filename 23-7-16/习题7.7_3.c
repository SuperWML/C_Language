#include <stdio.h>

int Gcd(int num1,int num2);

int main (void)
{
	int num1,num2;
	
	scanf("%d %d",&num1,&num2);
	printf("%d",Gcd(num1,num2));
	
	return 0;
}
int Gcd(int num1,int num2)
{
	if(num1 > num2)
	{
		Gcd(num1-num2,num2);
	}
	else if(num2 > num1)
	{
		Gcd(num1,num2-num1);
	}
	else
	{
		return num1;
	}
}
