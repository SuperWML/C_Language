#include <stdio.h>
int main (void)
{
	int juli = 0;
	scanf("%d",&juli);
	int walk = juli;
	float taxi = juli/10.0+10;
	if(walk < taxi)
	{
		printf ("w\n");
	}
	else
	{
		printf ("v\n");
	}
	
	return 0;
}
