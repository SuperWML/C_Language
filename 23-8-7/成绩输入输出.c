#include <stdio.h>
int main (void)
{
	int score[3] = {0};
	for(int i = 0;i < 3;i++)
	{
		scanf("%d",&score[i]);
	}
	for(int i = 0;i < 3;i++)
	{
		printf ("score%d=%d",i+1,score[i]);
		if(i < 2)
		{
			printf (",");
		}
	}
	return 0;
}
