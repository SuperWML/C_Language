#include <stdio.h>
int main (void)
{
	int y,m,d,y1,m1,d1;
	scanf("%d %d %d",&y,&m,&d);
	scanf("%d %d %d",&y1,&m1,&d1);
	if(y1 > y)
	{
		printf ("yes\n");
	}
	else if(y1 == y)
	{
		if(m1 > m)
		{
			printf ("yes\n");
		}
		else if(m1 == m)
		{
			if(d1 >= d)
			{
				printf ("yes\n");
			}
			else
			{
				printf ("no\n");
			}
		}
		else
		{
			printf ("no\n");
		}
	}
	else
	{
		printf ("no\n");
	}
	return 0;
}
