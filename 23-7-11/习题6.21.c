#include <stdio.h>
int main (void)
{
	int A = 5,B = 6,C = 7,m;
	int mA,mB,mC,sum = 0;
	for(m = 0;m < 21;m++)
	{
		mA = A;
		mB = B;
		mC = C;
		if(mA == mB && mB == mC)
		{
			sum++;
		}
		A += 5;
		B += 6;
		C += 7;
	}
	printf ("%d",3*21 - sum);
	return 0;
}
