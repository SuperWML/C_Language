#include <stdio.h>
#include <math.h>
int main (void)
{
	int x1,y1,x2,y2;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	printf ("%d",(int)pow(x1-x2,2) + (int)pow(y1-y2,2));
	return 0;
}
