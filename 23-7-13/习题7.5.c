#include <stdio.h>

void Fact(int n);
void PrintFact(int fact,int source);

int main (void)
{
	int num = 0;
	scanf("%d",&num);
	Fact(num);
	return 0;
}

void Fact(int n)
{
	int i,j = 1;
	for(i = 1;i<= n;i++)
	{
		j *= i;
		PrintFact(j,i);
	}
}

void PrintFact(int fact,int source)
{
	printf ("%d的阶乘是%d\n",source,fact);
}
