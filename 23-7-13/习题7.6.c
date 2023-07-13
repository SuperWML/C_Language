#include <stdio.h>

int Fact(int n);
int SumFact(int num);

int main (void)
{
	int num = 0;
	//int i = 0;
	scanf("%d",&num);
	while(num > 0)
	{
		SumFact(Fact(num));
		num--;
	}
	printf ("%d",SumFact(num));
	return 0;
}

int Fact(int n)
{
	int i,j = 1;
	for(i = 1;i<= n;i++)
	{
		j *= i;
	}
	return j;
}

int SumFact(int num)
{
	static int sum = 0;
	sum += num;
	return sum;
}
