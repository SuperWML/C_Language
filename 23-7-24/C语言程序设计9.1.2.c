#include <stdio.h>
int check(int x,int y,int n);
int main (void)
{
	
	return 0;
}
int check(int x,int y,int n)
{
	if(x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
