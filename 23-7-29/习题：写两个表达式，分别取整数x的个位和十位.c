#include <stdio.h>
int main (void)
{
	int x = 0;
	int gewei = 0;
	int shiwei = 0;
	scanf("%d",&x);
	gewei = x%10;
	shiwei = x/10%10;
	return 0;
}
