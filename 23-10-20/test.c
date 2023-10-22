#include <stdio.h>
int main (void)
{
	char* names[] = {"Alan","Frank","Mary","John","Lisa"};
	char* (*test)[5] = &names;
	for(int i = 0;i < 5;i++)
	{
		printf ("%s\n",(*test)[i]);
	}
	return 0;
}
