#include <stdio.h>
int main (void)
{
	int math,chinese,english;
	scanf("%d %d %d",&math,&chinese,&english);
	if((math+chinese+english)/3 >= 60)
	{
		printf ("NO\n");
	}
	else
	{
		printf ("YES\n");
	}
	return 0;
}
