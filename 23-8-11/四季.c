#include <stdio.h>
int main (void)
{
	int year = 0;
	int month = 0;
	scanf("%4d%2d",&year,&month);
	int real_month = month%12;
	switch (real_month) {
	case 0:
	case 1:
	case 2:
		{
			printf ("winter\n");
			break;
		}
	case 3:
	case 4:
	case 5:
		{
			printf ("spring\n");
			break;
		}
	case 6:
	case 7:
	case 8:
		{
			printf ("summer\n");
			break;
		}
	case 9:
	case 10:
	case 11:
		{
			printf ("autumn\n");
			break;
		}
	}
	return 0;
}
