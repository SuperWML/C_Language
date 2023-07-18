#include <stdio.h>
#define MAX_NUMBER 40
int main (void)
{
	int StuScore[MAX_NUMBER] = {0};
	int number = 0,i;
	int count = 0;
	scanf("%d",&number);
	for(i = 0;i < number;i++)
	{
		scanf("%d",&StuScore[i]);
	}
	for(i = 0;i < number;i++)
	{
		if(StuScore[i] < 60)
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
