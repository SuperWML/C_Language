#include <stdio.h>
#include <math.h>
int Is_Prime(int num)
{
	for(int i = 2;i <= sqrt(num);i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		int num = 0;
		scanf("%d",&num);
		if(Is_Prime(num))
		{
			printf ("true\n");
		}
		else
		{
			printf("false\n");
		}
	}
	return 0;
}
//int main() {
//	int n, m = 0;
//	while (scanf("%d", &n) != EOF) {
//		m++;
//		if (m != 1) {
//			int count = 0;
//			for (int i = 1; i <= n; i++) {
//				if (n % i == 0) count++;
//			}
//			if (count == 2) printf("true\n");
//			else printf("false\n");
//		}
//	}
//	return 0;
//}

