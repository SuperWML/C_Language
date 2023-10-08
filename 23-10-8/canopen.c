#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[])
{
	FILE* fp;
	if(argc != 2)
	{
		printf ("usage:canopen filename\n");
		return 0;
	}
	if((fp = fopen(argv[1],"r")) == NULL)
	{
		printf ("%s can't be opened\n",argv[1]);
		return 0;
	}
	printf ("%s can be opened\n",argv[1]);
	fclose(fp);
	fp = NULL;
	return 0;
}
