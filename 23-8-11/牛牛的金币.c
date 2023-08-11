#include <stdio.h>
int main (void)
{
	int x,y,x1,y1;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&x1,&y1);
	if(x1 <x)
	{
		printf ("l\n");
	}
	else if(x1 > x)
	{
		printf ("r\n");
	}
	else if(y1 > y)
	{
		printf ("u\n");
	}
	else
	{
		printf ("d\n");
	}
	
	return 0;
}
