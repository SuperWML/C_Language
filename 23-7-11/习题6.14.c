#include <stdio.h>
int main (void)
{
	int man,woman,child;
	for(man = 1;man <= 30;man++)
	{
		for(woman = 1;woman <= 30;woman++)
		{
			for(child = 1;child <= 30;child++)
			{
				if(((man*3 + woman * 2 + child) == 50) && (man + woman + child) == 30)
				{
					printf ("man:%d woman:%d child:%d\n",man,woman,child);
				}
			}
		}
	}
}
