#include <stdio.h>
int main (void)
{
	int arr[][3] = {{1,2,3},{4,5,6}};
	int** test = arr;
	printf ("%d",test[1][1]);
	return 0;
}
