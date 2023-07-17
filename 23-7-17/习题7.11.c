#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void manu(int ret);

//int main (void)
//{
//	srand((unsigned int)time(NULL));
//	//start是1，电脑先，0，玩家先
//	int start = rand()%2;
//	int i = 1;       //遍历1-30之间的数字
//	int num = 0;
//	
//	manu(start);
//	while(i <= 30)
//	{
//		if(i == 1)
//		{
//			if(start == 1)
//			{
//				printf ("%d",i);
//				start = 0;
//			}
//			else
//			{
//				printf ("%d",i);
//				start = 1;
//			}
//		}
//		do
//		{
//			switch(start)
//			{
//			case 0:
//				{
//					printf ("\n玩家请报一到两个数,");
//					printf ("你所能报的数字是：%d %d",i+1,i+2);
//					scanf("%d %d");
//					start = 1;
//					break;
//				}
//			case 1:
//				{
//					break;
//				}
//			}
//		}while(1);
//	}
//	
//	return 0;
//}
//void manu(int ret)
//{
//	if(ret == 1)
//	{
//		printf ("计算机先报：");
//	}
//	else
//	{
//		printf ("玩家先报：");
//	}
//}

int main (void)
{
	int num1,num2;
	if(scanf("%d %d",&num1,&num2) == 1)
	{
		printf ("1");
	}else
	{
		printf ("2");
	}
}
