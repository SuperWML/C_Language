#define SWAP(n) n=(((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	SWAP(n);
	printf ("%d\n",n);
	
	return 0;
}
