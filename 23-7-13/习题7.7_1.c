#include <stdio.h>
int main (void)
{
	int num1,num2,t;
	scanf("%d %d",&num1,&num2);
	t = num1>num2 ? num2:num1;
	while(t > 1)
	{
		if(num1%t == 0 && num2%t == 0)
		{
			break;
		}
		t--;
	}
	printf ("%d",t);
	return 0;
}
