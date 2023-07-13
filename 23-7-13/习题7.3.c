#include <stdio.h>

int Max(int a,int b)
{
	return a>b ? a : b;
}

int main (void)
{
	int num1,num2;
	
	scanf("%d %d",&num1,&num2);
	printf ("%d",Max(num1,num2));
	
	return 0;
}
