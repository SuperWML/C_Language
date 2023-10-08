#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "example.dat"

int main (void)
{
	FILE* fp = NULL;
	fp = fopen(FILE_NAME,"r");
	if(fp == NULL)
	{
		printf ("Can't open %s\n",FILE_NAME);
		return -1;
	}
	//...
	fclose(fp);
	return 0;
}
