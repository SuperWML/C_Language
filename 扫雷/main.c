#include "game.h"
int main (void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		manu();
		printf ("请输入您的选项，1是玩游戏，0是退出：");
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
				printf ("游戏结束，退出！\n");
				break;
			}
		}
	}while(input);
	return 0;
}
