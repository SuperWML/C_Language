#include <stdio.h>
int main (void)
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c) != EOF)
	{
		if((a + b > c) && (a + c > b) && (c + b > a))
		{
			if((a == b) && (a == c) && (c == b))
			{
				printf ("Equilateral triangle!\n");
			}
			else if((a == b) || (a == c) || (b == c))
			{
				printf ("Isosceles triangle!\n");
			}
			else
			{
				printf ("Ordinary triangle!\n");
			}
		}
		else
		{
			printf ("Not a triangle!\n");
		}
	}
	return 0;
}
