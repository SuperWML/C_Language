#include <stdio.h>
int main (void)
{
	int score = 0;
	while(scanf("%d",&score) != EOF)
	{
		if(score >= 60)
		{
			printf ("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}
