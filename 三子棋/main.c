#include "game.h"
int main (void)
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = {0};
//	char x = 0;
	int input = 0;
	do{
		manu();
		printf ("请输入选项，1是玩游戏，0是退出：");
		scanf("%d",&input);
//		printf ("请问您要开启地狱难度吗？");
//		scanf("%c",&x);
		switch(input)
		{
		case 1:
			{
				game(board,ROW,COL);
				break;
			}
		case 0:
			{
				printf ("退出！\n");
				break;
			}
		default :
			{
				printf ("输入错误，请重新输入：\n");
				break;
			}
		}
	}while(input);
	return 0;
}
