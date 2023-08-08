#include <stdio.h>
#include <string.h>
#define MAX 20000000
int main (void)
{
	unsigned int a = 0;
	float score[3] = {0};
	scanf("%u;%f,%f,%f",&a,&score[0],&score[1],&score[2]);
	printf("The each subject score of No. %u is %.2lf, %.2lf, %.2lf.",a,score[0],score[1],score[2]);
	return 0;
}
