//#include <stdio.h>
//int main (void)
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	if((a + b) <= 7)
//	{
//		printf ("%d",a+b);
//	}
//	else
//	{
//		if((a+b) % 7 == 0)
//		{
//			printf ("%d",7);
//		}
//		else
//		{
//			printf ("%d",(a+b) % 7);
//		}
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	int  Week, Day;
	scanf("%d%d", &Week, &Day);
	printf("%d\n",(Week + Day - 1) % 7 + 1); //避免出现周日余数为0，兼顾简洁易懂
	return 0;
}

