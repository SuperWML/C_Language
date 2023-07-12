#include <stdio.h>
#define N 80
char* MyStrcat(char* destStr,char* sourcStr);
int main (void)
{
	char A[N] = "hello ";
	char B[N] = "China";
	printf ("%s",MyStrcat(A,B));
	
	return 0;
}
char* MyStrcat(char* destStr,char* sourcStr)
{
	char* temp = destStr;
	while(*destStr != '\0')
	{
		destStr++;
	}
	while(*sourcStr != '\0')
	{
		*destStr = *sourcStr;
		destStr++;
		sourcStr++;
	}
	*destStr = '\0';
	return temp;
}
