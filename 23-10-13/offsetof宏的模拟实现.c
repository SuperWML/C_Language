#define OFFSETOF(structName,memberName) (size_t)&(((structName*)0)->memberName)
#include <stdio.h>

struct S
{
	int a;
	char b;
	float c;
	double d;
};

int main (void)
{
	printf ("%d\n",OFFSETOF(struct S,a));
	printf ("%d\n",OFFSETOF(struct S,b));
	printf ("%d\n",OFFSETOF(struct S,c));
	printf ("%d\n",OFFSETOF(struct S,d));
	return 0;
}
