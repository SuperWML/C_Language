#include <stdio.h>
int main (void)
//{
//	int i,j;
//	for(i = 1;i <= 9;i++)
//	{
//		printf ("%-3d",i);
//	}
//	printf ("\n");
//	for(i = 1;i <=9;i++)
//	{
//		printf ("-  ");
//	}
//	printf ("\n");
//	for(i = 1;i <= 9;i++)
//	{
//		for(j = 1;j <= 9;j++)
//		{
//			printf ("%-3d",i*j);
//		}
//		printf ("\n");
//	}
//	return 0;
//}
//{
//	int i,j;
//	for(i = 1;i <= 9;i++)
//	{
//		printf ("%-3d",i);
//	}
//	printf ("\n");
//	for(i = 1;i <=9;i++)
//	{
//		printf ("-  ");
//	}
//	printf ("\n");
//	for(i = 1;i <= 9;i++)
//	{
//		for(j = 1;j <= i;j++)
//		{
//			printf ("%d ",j*i);
//		}
//		printf ("\n");
//	}
//}
{
	int i,j;
	for(i = 1;i <= 9;i++)
	{
		printf ("%-3d",i);
	}
	printf ("\n");
	for(i = 1;i <=9;i++)
	{
		printf ("-  ");
	}
	printf ("\n");
	for(i = 1;i <= 9;i++)
	{
		for(j = 1;j <= 9;j++)
		{
			if(j >= i)
			{
				printf ("%-3d",i*j);
			}
			else
			{
				printf ("   ");
			}
		}
		printf ("\n");
	}
}
