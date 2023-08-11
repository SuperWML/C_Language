#include <stdio.h>
int main (void)
{
	int day = 0;
	while(scanf("%d",&day) != EOF)
		switch(day)
	{
	case 200:
		{
			printf ("OK\n");
			break;
		}
	case 202:
		{
			printf ("Accepted\n");
			break;
		}
	case 400:
		{
			printf ("Bad Request\n");
			break;
		}
	case 403:
		{
			printf ("Forbidden\n");
			break;
		}
	case 404:
		{
			printf ("Not Found\n");
			break;
		}
	case 500:
		{
			printf ("Internal Server Error\n");
			break;
		}
	case 502:
		{
			printf ("Bad Gateway\n");
			break;
		}
	}
	return 0;
}
