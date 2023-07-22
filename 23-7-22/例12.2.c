#include <stdio.h>
typedef struct sample
{
	char m1;
	int m2;
	char m3;
}SAMPLE;
int main (void)
{
	SAMPLE s = {'a',2,'b'};
	printf ("bytes = %d\n",sizeof(s));
	return 0;
}
