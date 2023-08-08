#include <stdio.h>
#define MAX 3156E4
int main (void)
{
	long int age = 0;
	scanf("%ld",&age);
	printf ("%ld",age*(int)MAX);
	return 0;
}
