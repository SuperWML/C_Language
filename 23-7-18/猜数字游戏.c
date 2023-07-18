#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void manu(void);
void game(void);

int main (void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		manu();
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			{
				game();
				break;
			}
		case 0:
			{
				printf ("退出！\n");
				break;
			}
		default :
			{
				printf ("输错了，重来！\n");
			}
		}
	}while(input);
	return 0;
}

//函数功能：打印一个页面
void manu(void)
{
	printf ("****************************\n");
	printf ("***********1. play**********\n");
	printf ("***********0. exit**********\n");
	printf ("****************************\n");
}

//函数功能：实现猜数字游戏的游戏功能
void game(void)
{
	int ret = rand()%100+1;
	int guess = 0;
	while(1)
	{
		printf ("请猜数字：");
		scanf("%d",&guess);
		if(guess < ret)
		{
			printf ("小了！\n");
		}
		else if(guess > ret)
		{
			printf ("大了！\n");
		}
		else
		{
			printf ("对了！\n");
			break;
		}
	}
}
