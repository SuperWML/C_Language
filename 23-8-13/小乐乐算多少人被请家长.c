#include <stdio.h>
int main (void)
{
	int num,chinese,math,english;
	int sum = 0;
	int count = 0;
	scanf("%d",&num);
	for(int i = 0;i < num;i++)
	{
		scanf("%d %d %d",&chinese,&math,&english);
		sum = chinese+math+english;
		if(sum/3 < 60)
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
